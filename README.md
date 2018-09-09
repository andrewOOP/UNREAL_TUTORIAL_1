# UNREAL_TUTORIAL_1
Introduction to C++ Programming in UE4
https://docs.unrealengine.com/en-us/Programming/Introduction
# What I Learned
It was a lot of remembering C++ syntax, but this taught me how Unreal is trying to make C++ a more "modern day" language, with garbage collecting, using blueprints with C++, etc. This has a bunch of basics I needed, and I've feeling confident now.
# Notes
So, Unreal C++ is super object oriented. You create blocks of code functionality in C++, but you implement it with Blueprints (it seems that way at least at this point).

It didn’t tell you how to create the project, so I just assumed New Project/C++/Basic Code/With Starter Content (I was wrong…. They did it off the FPS project, dang it) (Turns out, it doesn’t really matter what template you pick to start, but they did use the FPS project)

Confusing part, it said to launch the New Actor Wizard, but what it meant was click Add New/ C++ Class and choose Actor from the list

The generated code shown in the tutorial is from the .h file, but the editor opened the .cpp first, so I got confused for a bit until I remembered that C++ has header files. Oops (^^;

The generated code is a bit different from the tutorial, but just a bit, not confusing

The tutorial doesn’t say whether its code snippets are in the cpp or h files, so you just gotta figure it out sometimes

Definitely need to have previous C++ knowledge. The tutorial doesn’t explain nearly anything about the syntax, but programming 1 and 2 prepared me, so… good job! :D

Had no idea you could do 1.f instead of 1.0f

For PostInitProperties it doesn’t tell you where to add it in the .h file, so I added it under protected (Seems this is a common occurrence in the tutorial)

It’s interesting that you can compile in either Visual Studio or Unreal. Compiling with Unreal gives better error messages

I’m somewhat unsure if every function needs to be public, but I assume so since they need to be accessed by the blueprint

The whole override a C++ function in blueprint is really funky and not explained super well. I figured it out though and put it in the project

Seems Actors are like GameObjects in Unity and both contain components

TObjectIterator doesn’t compile. It says it’s not a template despite being shown to be one in documentation. I read online that it may be a bug.
The tutorial says FName’s index is checked with nameA.Index but it’s changed to nameA.GetComparisionIndex()

Using a For Each loop creates a false positive error in Visual Studio. It’s current bug and hasn’t been fixed 
