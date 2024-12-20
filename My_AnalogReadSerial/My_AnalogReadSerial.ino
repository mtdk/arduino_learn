/*
  AnalogReadSerial
  获取模拟信号示例
  实验要求：
  本示例使用arduino nou 开发版+光敏传感器
  Reads an analog input on pin 0, prints the result to the Serial Monitor.
  读取0号针脚的模拟信号，并在串口监视器中显示
  Graphical representation is available using Serial Plotter (Tools > Serial Plotter menu).
  串口绘图仪在工具菜单栏中
  Attach the center pin of a potentiometer to pin A0, and the outside pins to +5V and ground.
  将传感器的中间引脚连接到A0接口，把旁边的引脚接入+5V接口和接地接口
  This example code is in the public domain.
  此示例代码属于开元代码
  https://www.arduino.cc/en/Tutorial/BuiltInExamples/AnalogReadSerial
*/

// the setup routine runs once when you press reset:
// 当你按下重启键setup程序运行一次配置设置
void setup() {
  // initialize serial communication at 9600 bits per second:
  // 初始化通讯端口频率9600位每秒
  Serial.begin(9600);
}

// the loop routine runs over and over again forever:
// loop程序重复运行
void loop() {
  // read the input on analog pin 0:
  // 读取0号引脚的模拟信号值
  int sensorValue = analogRead(A0);
  // print out the value you read:
  // 打印读取的值
  Serial.println(sensorValue);
  // 间隔一毫米重新读取一次
  delay(1);  // delay in between reads for stability
}
