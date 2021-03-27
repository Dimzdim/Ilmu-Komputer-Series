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
        body: new SafeArea(
          child: Container(
            padding: EdgeInsets.all(50),
            child: Column(
              mainAxisAlignment: MainAxisAlignment.center,
              children: [
                new ClipRRect(
                  borderRadius: BorderRadius.circular(80.0),
                  child: new Image.asset("images/person.jpg",
                      width: 150, height: 150, fit: BoxFit.cover),
                ),
                Padding(padding: EdgeInsets.only(top: 20)),
                Text(
                  "Dimas Purnomo",
                  style: TextStyle(
                      fontSize: 25,
                      color: Colors.black,
                      fontWeight: FontWeight.bold),
                ),
                Padding(padding: EdgeInsets.only(top: 10)),
                Text(
                  "Android Developer",
                  style: TextStyle(
                    fontSize: 20,
                    color: Colors.black,
                  ),
                ),
                Padding(padding: EdgeInsets.only(top: 20)),
                new Container(
                  padding: EdgeInsets.all(10),
                  child: Row(
                    children: [
                      Icon(Icons.call, color: Colors.black),
                      Padding(
                        padding: EdgeInsets.only(right: 20),
                      ),
                      Text("+6282122366675")
                    ],
                  ),
                  decoration: BoxDecoration(
                    borderRadius: BorderRadius.circular(20),
                    border: Border.all(width: 2.0, color: Colors.black),
                  ),
                ),
                Padding(padding: EdgeInsets.only(top: 10)),
                new Container(
                  padding: EdgeInsets.all(10),
                  child: Row(
                    children: [
                      Icon(Icons.mail, color: Colors.black),
                      Padding(
                        padding: EdgeInsets.only(right: 20),
                      ),
                      Text("dimzpurnomo2@gmail.com")
                    ],
                  ),
                  decoration: BoxDecoration(
                    borderRadius: BorderRadius.circular(20),
                    border: Border.all(width: 2.0, color: Colors.black),
                  ),
                ),
              ],
            ),
          ),
        ),
      ),
    );
  }
}
