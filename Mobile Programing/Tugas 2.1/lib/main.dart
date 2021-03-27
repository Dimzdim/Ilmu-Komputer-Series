import 'package:flutter/material.dart';

void main() {
  runApp(MyApp());
}

class MyApp extends StatelessWidget {
  @override
  Widget build(BuildContext context) {
    return MaterialApp(
      title: 'DimasApp',
      home: Scaffold(
        backgroundColor: Colors.teal,
        body: new Row(mainAxisAlignment: MainAxisAlignment.spaceBetween, children: [
          new Container(
            width: 100,
            color: Colors.red,
          ),
          Column(mainAxisAlignment: MainAxisAlignment.center,
            children: [
              new Container(
                width: 100,
                height: 100,
                color: Colors.yellow,
              ),
              new Container(
                width: 100,
                height: 100,
                color: Colors.green,
              ),
            ],
          ),
          new Container(
            width: 100,
            color: Colors.blue,
          ),
        ]),
      ),
    );
  }
}
