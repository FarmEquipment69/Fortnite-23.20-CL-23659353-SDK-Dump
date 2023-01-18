// Class /Script/AndroidFileServer.AndroidFileServerBPLibrary
// Size: 0x28
class UAndroidFileServerBPLibrary : public UBlueprintFunctionLibrary
{

	/* Functions */

	// Function /Script/AndroidFileServer.AndroidFileServerBPLibrary.StopFileServer (Underlying native function: StopFileServer 0x8088c18)
	static bool StopFileServer(bool& bUSB, bool& bNetwork); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/AndroidFileServer.AndroidFileServerBPLibrary.StartFileServer (Underlying native function: StartFileServer 0x8088b2c)
	static bool StartFileServer(bool& bUSB, bool& bNetwork, int& Port); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/AndroidFileServer.AndroidFileServerBPLibrary.IsFileServerRunning (Underlying native function: IsFileServerRunning 0x2486284)
	static struct TEnumAsByte<EAFSActiveType> IsFileServerRunning(); // (Final | Native | Static | Public | BlueprintCallable)
};

