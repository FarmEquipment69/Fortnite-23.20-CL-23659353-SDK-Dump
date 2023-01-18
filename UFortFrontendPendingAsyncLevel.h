// Class /Script/FortniteGame.FortFrontendPendingAsyncLevel
// Size: 0x48
class UFortFrontendPendingAsyncLevel : public UObject
{
	class ULevelStreamingDynamic* SubgameStreamingLevel; // 0x28 (0x8)
	class UFortGameStateComponent_FrontEndFlow* FrontEndFlow; // 0x30 (0x8)
	struct FName PackageName; // 0x38 (0x4)
	enum EFrontEndCamera CameraOverride; // 0x3c (0x1)
	unsigned char unreflected_3d[0x3]; // 0x3d (0x3) 
	struct FName CameraName; // 0x40 (0x4)
	unsigned char padding_44[0x4]; // 0x44 (0x4)

	/* Functions */

	// Function /Script/FortniteGame.FortFrontendPendingAsyncLevel.HandleLevelLoadedAsync (Underlying native function: HandleLevelLoadedAsync 0x86e9234)
	void HandleLevelLoadedAsync(); // (Final | Native | Public)
};

