# -Sunscreen  
cds센서, sonar센서, hall센서를 이용한 햇빛가림막 시스템
<br>
## 서비스 목적과 배경  
운전을 하거나 버스를 타게 된다면 햇빛으로 눈이 부시거나, 피부가 뜨거워지는 경우가 생깁니다.  
이럴때, 손을 쓰지않고 자동적으로 햇빛을 가려주는 가림막이 있다면 어떨까요?  
<br>
<br>
## 하드웨어 설계  
![image](https://user-images.githubusercontent.com/35206992/103438084-5e7a7b00-4c72-11eb-8175-fa5f2e3be1ec.png)
<br>
<br>
<br>
## 동작 시나리오  
1. 홀센서로 자석을 갖다대어 시작을 알립니다.  
<br>![image](https://user-images.githubusercontent.com/35206992/103438311-60920900-4c75-11eb-84ee-2401535f996c.png)
<br>
2. cds센서로 빛의 양으로 빛의 위치를 짐작합니다.  
<br>![image](https://user-images.githubusercontent.com/35206992/103438380-0e051c80-4c76-11eb-9ad5-20ce2a1b3c92.png)
<br>
3. 초음파센서로 적당한 거리를 둘 수 있게 합니다.  
<br>
4. 서보모터로 가림막을 움직입니다.  
<br>
![system3](https://user-images.githubusercontent.com/35206992/103438296-36404b80-4c75-11eb-975f-8f6d8bb7b6b5.gif)
