void main() {
  performTasks();
}

void performTasks() async {
  task1();
  await task2();
  task3();
}

void task1() {
  String result = 'task 1 data';
  print('Task 1 complete');
  print(result);
}

Future<void> task2() async {
  // To Do: Ubah metode berikut menjadi async method
  
  String result = 'task 2 data';
  print('Task 2 complete');
  print(result);
  // Uncomment potongan kode berikut
  Duration tigaDetik = Duration(seconds: 3);
  await Future.delayed(tigaDetik);
  result = "data dari task 2";
  print(result);
}

void task3() {
  String result = 'task 3 data';
  print('Task 3 complete');
  print(result);
}
