INSTALL THE TRACKER

Download the latest build for you app

Add the Framework and The bundle like this :

Drag drop the MobiTrack.framework to your Framework Folder. You need to add it to all your targets.

In the Build Phase > Copy bundle resource, add the MobiTrack.bundle.

The framework is reliant on AFNetworking. If you have it already, you're good to, else you have to add it to your project. https://github.com/AFNetworking/AFNetworking

Add to your appDelegate the code we gave you when you created your app.