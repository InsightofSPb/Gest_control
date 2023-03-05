# <center>Отчёт о выполнении курсовой работы по предмету "Программирование роботов" </center>

<br/><br/>
## <center><b>Тема:</b></center>
# <center>Управление жестами</center>

<br/><br/>
## Команда "мы!". 
## Авторы:
+ Топольницкий Александр
+ Мельникова Виолетта

## Задачи на курсовую работу:
+ Создать пакет с собранным роботом, запустить симуляцию с ним;
+ Обеспечить управление схватом манипулятора с помощью жестов с камеры манипулятора;
+ Обеспечить управление манипулятором с помощью жестов, получаемых с камеры.
<br/><br/>
# <center>Ход работы</center>


## Шаг 1. Установка ROS и необходимых пакетов. Создание папки для проекта
### 1.1. Установка ROS и catkin

Для начала необходимо установить [ROS](http://wiki.ros.org/noetic/Installation/Ubuntu). Устанавливаем ROS Noetic для Ubuntu версии 20.04 с официального сайта. Делаем всё по инструкции с сайта. Также, для того, чтобы можно было пользоваться catkin workspace, для возможности создавать пакеты, необходимо в консоль прописать следующее:
```
sudo apt-get install python3-catkin-tools
```
### 1.2. Создание папки для размещения проекта
Проект будет лежать в папке `project`. Необходимо также создать в проекте папку `src`, чтобы удобно потом было прописывать все необходимые зависимости ко всем пакетам, которые будут лежать в этой папке. Необходимо последовательно выполнить следующие команды в консоли:
```
mkdir -p ~/project/src
cd project/src
```
## Шаг 2. Установка всех необходимых пакетов для запуска симуляции робота
Будем использовтаь робота, собранного из двух разных - подвижная платформа, взятая у [Robotnik Automation](https://github.com/RobotnikAutomation) и манипулятор, взятый у [Kirillin](https://github.com/kirillin?tab=repositories&q=&type=&language=&sort=).
### 2.1. Загрузка манипулятора
Для начала загрузим манипулятор. Для этого найдём репозиторий `simple_gripper_gazebo` и склонируем его в нашу папку `src`:
```
git clone https://github.com/kirillin/simple_gripper_gazebo.git
```
### 2.2. Загрузка пакетов для платформы
Здесь будет довольно много пакетов, которые необходимо склонировать для успешной работы робота. Также в папку `src` последовательно прописываем следующие команды:
```
git clone https://github.com/RobotnikAutomation/rbvogui_sim.git

git clone https://github.com/RobotnikAutomation/rbvogui_common

git clone https://github.com/RobotnikAutomation/robotnik_sensors.git

git clone https://github.com/RobotnikAutomation/robotnik_pad.git

git clone https://github.com/RobotnikAutomation/rcomponent.git

git clone https://github.com/ros-industrial/universal_robot.git

git clone https://github.com/RobotnikAutomation/joint_read_command_controller.git

git clone https://github.com/utexas-bwi/eband_local_planner.git

git clone https://github.com/RobotnikAutomation/robotnik_msgs.git
```
### 2.3. Необходимо теперь создать наш пакет, launch file, собрать робота
Мы всё также находимся в папке `project/src`, в ней же прописываем следующее для создания пакета:
```
catkin_create_pkg meow rospy roscpp
```
Пакет называется `meow`, также добавили зависимости для питона и плюсов.

Теперь создадим папку `launch` и в папку `robots`:
```
mkdir launch
mkdir robots
```

Теперь напишем `urdf` файл и соберём нашего робота. Установим утилиту Midnight Commander для работы с файлами, запустим
```
sudo apt-get install mc
```
Теперь из папки  `src/rbvogui_common/rbvogui_description/robots` возьмём файл `rbvogui_std_ur10.urdf.xacro` и поместим его в нашу папку `robots`. Переименуем в `meow.xacro`. Запустим этот файл, необходимо добавить несколько строчек, 27 строка:

```html
    <xacro:include filename="$(find simple_gripper_gazebo)/urdf/simple_gripper.xacro" />
```
Находим папку, в ней находим нужный нам файл. \
Добавим к нашему 6 звену схват с помощью строк 124 - 126 (название инструмента можно найти в профиле компании, ur_description):
```html
        <xacro:simple_griper prefix="${prefix}" parent="${prefix}arm_tool0">
            <origin xyz="0 0 0" rpy="0 0 0"/>
        </xacro:simple_griper>
```

Теперь создадим наш `start_scene.launch` file. Его структура приведена ниже:
```html
<?xml version="1.0"?>
<launch>
  <arg name="gazebo_gui" default="true"/>
  <arg name="rviz_gui" default="true"/>

  <arg name="robot_custom_xacro_path" default="$(find meow)/robots/meow.xacro"/>


  <include file="$(find rbvogui_sim_bringup)/launch/rbvogui_complete.launch">

    <arg name="robot_model" value="rbvogui"/>
    <arg name="robot_xacro" value=""/>
    <arg name="robot_use_custom_xacro_path" default="true"/>
    <arg name="robot_custom_xacro_path" default="$(arg robot_custom_xacro_path)"/>

    <arg name="launch_arm" value="true"/>
    <arg name="arm_manufacturer" value="ur"/>
    <arg name="arm_model" value="ur10"/>

    <arg name="run_rviz" value="false"/>
    <arg name="use_gui" value="$(arg gazebo_gui)"/>
  </include>

  <group ns='robot'>
    <rosparam file="$(find simple_gripper_gazebo)/config/controller.yaml" command="load" subst_value="true"/>

    <node name="robot_gripper_action_controller" pkg="controller_manager" type="spawner" output="screen"
      args="
          gripper
      "
      />
  </group>

  <group if="$(eval arg('rviz_gui') == true)">
      <node name="scene_rviz" pkg="rviz" type="rviz" required="true" />
  </group>

</launch>
```
Запускаем `gazeob`, `griz`, прописываем пусть к нашему файлу с манипулятором, который мы только что отредактировали и добавили несколько строк, указываем контроллер, запуск сцены.

### 2.4. Запуск сцены
Прописываем следующие команды для обновления нашего окружения, для создания всех зависимостей и для запуска нашего лаунч-файлы:
```
sudo apt-get install rosdep
rosdep install --from-paths src --ignore-src -r -y

catkin build
source ../devel/setup.bash


roslaunch meow start_scene.launch
```