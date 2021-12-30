## :file_folder:3-1 컴퓨터 비전

:open_file_folder: lab1: 3가지 bmp 파일을 생성하는 프로그램  

:paperclip: 1) output1.bmp: lenna.bmp 파일과 동일한 영상

​	2) output2.bmp: 원본 영상의 밝기값을 50만큼 증가시킨 영상 (별도 overflow로 인한 클리핑처리는 								  필요없음)

​	3) output3.bmp: 원본 영상의 반전 결과 영상(negative image)



<img src="C:\Users\jihyun\OneDrive\Documents\이지현\컴퓨터비전\1_output\LENNA.bmp" alt="LENNA" style="zoom: 50%;" /> <img src="C:\Users\jihyun\OneDrive\Documents\이지현\컴퓨터비전\1_output\output1.bmp" alt="output1" style="zoom:50%;" /><img src="C:\Users\jihyun\OneDrive\Documents\이지현\컴퓨터비전\1_output\output2.bmp" alt="output2" style="zoom:50%;" /><img src="C:\Users\jihyun\OneDrive\Documents\이지현\컴퓨터비전\1_output\output3.bmp" alt="output3" style="zoom:50%;" />

 		(원본)					(output1)				(output2)				(output3)

------

:open_file_folder: lab2: 입실론 값 3 이하로 Gonzalez 자동 이진화 임계치 결정 프로그램 구현

<img src="C:\Users\jihyun\OneDrive\Documents\이지현\컴퓨터비전\2_output\coin.bmp" alt="coin" style="zoom:50%;" /> <img src="C:\Users\jihyun\OneDrive\Documents\이지현\컴퓨터비전\2_output\output.bmp" alt="output" style="zoom:50%;" />

 	 	(원본)					(output)					

------

:open_file_folder: lab3: Median filter 윈도우 사이즈에 따른 결과 비교 각 output 뒤의 숫자는 윈도우의 사이즈를 의미함

<img src="C:\Users\jihyun\OneDrive\Documents\이지현\컴퓨터비전\3_output\lenna_impulse.bmp" alt="lenna_impulse" style="zoom:50%;" /><img src="C:\Users\jihyun\OneDrive\Documents\이지현\컴퓨터비전\3_output\median_5.bmp" alt="median_5" style="zoom:50%;" /><img src="C:\Users\jihyun\OneDrive\Documents\이지현\컴퓨터비전\3_output\median_7.bmp" alt="median_7" style="zoom:50%;" /><img src="C:\Users\jihyun\OneDrive\Documents\이지현\컴퓨터비전\3_output\median_9.bmp" alt="median_9" style="zoom:50%;" />

​		 (원본)				  (median_5)			(median_7)			(median_9)

------

:open_file_folder: lab4: 동공 영역을 검출한 후 동공영역에 외접하는 직사각형을 그리고, 동공 영역의 무게중심을 통과하는 수평/수직선을 그리는 프로그램

<img src="C:\Users\jihyun\OneDrive\Documents\이지현\컴퓨터비전\4_output\pupil1.bmp" alt="pupil1" style="zoom:50%;" /><img src="C:\Users\jihyun\OneDrive\Documents\이지현\컴퓨터비전\4_output\pupil2.bmp" alt="pupil2" style="zoom:50%;" />   :arrow_right:   <img src="C:\Users\jihyun\OneDrive\Documents\이지현\컴퓨터비전\4_output\output_bin_edge1.bmp" alt="output_bin_edge1" style="zoom:50%;" /><img src="C:\Users\jihyun\OneDrive\Documents\이지현\컴퓨터비전\4_output\output_bin_edge2.bmp" alt="output_bin_edge2" style="zoom:50%;" />

​			(pupil1)						(pupil2)							(output_bin_edge1)	  (output_bin_edge2)

------

:open_file_folder: lab5: Red~Cyan, Green~Magenta, Blue~Yellow 그라데이션 이미지를 만드는 프로그램을 출력

<img src="C:\Users\jihyun\OneDrive\Documents\이지현\컴퓨터비전\5_output\output.bmp" alt="output" style="zoom:50%;" /> (output)

------

:open_file_folder: lab6: bmp 파일에서 피부 영역을 검출하고, 피부 영역에 외적하는 바운딩 박스를 빨간색으로 표시하는 프로그램 구현

<img src="C:\Users\jihyun\OneDrive\Documents\이지현\컴퓨터비전\6_output\face.bmp" alt="face" style="zoom:50%;" /> :arrow_right: <img src="C:\Users\jihyun\OneDrive\Documents\이지현\컴퓨터비전\6_output\output.bmp" alt="output" style="zoom:50%;" />

​		(원본)							(output)

------

:open_file_folder: lab7: 세선화를 진행한 후 분기점과 끝점을 검출하여 표시해 주는 함수 구현

<img src="C:\Users\jihyun\OneDrive\Documents\이지현\컴퓨터비전\7_output\dilation.bmp" alt="dilation" style="zoom:50%;" /> :arrow_right:  <img src="C:\Users\jihyun\OneDrive\Documents\이지현\컴퓨터비전\7_output\output.bmp" alt="output" style="zoom:50%;" />

​		(원본)							(output)
