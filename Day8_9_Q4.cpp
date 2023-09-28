//  Discuss stortage classes to (auto static etern)

// A storage classes in c++ defines the scope,liftime ;
//   four storage classes in c++
// 1.automatic.
// 2.static.
// 3.register.
// 4.external.









// automatic (Local variable)

// When the function is called automatic variables are created and destroyed when function is exited.
// auto keyword is used to declare automatic type variable.


// Example

// #include<iostream>
// using namespace std;
// int main()
// {
// 	auto int x=5;
// 	{
// 	  auto int x=3;
// 	   {
// 		 auto int x=1;
// 		 cout<<x<<endl;
// 	   }
// 	   cout<<x<<endl;
// 	}
// 	cout<<x<<endl;
// }
/*
### Output ###
1
3
5
*/















// static

// Static variables can be used anywhere in the program inside or outside of a funtion or block.
// value of the static variable exists until the end of program.

// Example

// #include<iostream>
// using namespace std;
// void Demo()
// {
// 	static int x=0;
// 	cout<<x<<endl;
// 	x++;
// }
// int main()
// {
// 	Demo();//calling
// 	Demo();
// 	Demo();
// 	Demo();
// }
/*

### Output ###
0
1
2
3
*/










// Register

// register variables is stored in one of the register of system ,instead of memory.
// Value stored in register can be accessed faster than one that is stored in memory.

// Example

// #include<iostream>
// using namespace std;
// int main()
// {
// register int x,y=20,z=30;
// x=y+z;
// cout<<"Add="<<x;
// }

/*
### Output ###
Add=50
*/









// External

// Variable that can be used anywhere in the program is called external variable.
// 2.External storage class does not create a variable,but it informs the compiler of its existence.
// 3.extern keyword is used to declare external variable.

// Example

// #include<iostream>
// using namespace std;
// int x=10;//external variable
// int main()
// {
//    extern int x=5;
//    cout<<x;
// }

/*
### Output ###
5
*/