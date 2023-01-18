// Class /Script/FortniteGame.FortCameraBase
// Size: 0x9f0
class AFortCameraBase : public ACameraActor
{
	unsigned char unreflected_990[0x8]; // 0x990 (0x8) 
	float MinDistanceToDrag; // 0x998 (0x4)
	float DefaultFieldOfView; // 0x99c (0x4)
	struct FRotator DefaultRotation; // 0x9a0 (0x18)
	struct FVector DefaultLocation; // 0x9b8 (0x18)
	class AFortExhibitActor* ExhibitActor; // 0x9d0 (0x8)
	bool bExhibitActorChanged; // 0x9d8 (0x1)
	bool CheckForDragBegin; // 0x9d9 (0x1)
	unsigned char unreflected_9da[0x6]; // 0x9da (0x6) 
	struct FVector2D DownDelta; // 0x9e0 (0x10)

	/* Functions */

	// Function /Script/FortniteGame.FortCameraBase.OnDragEnd (Has no native function)
	void OnDragEnd(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortCameraBase.OnDragBegin (Has no native function)
	void OnDragBegin(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortCameraBase.Exhibit (Underlying native function: Exhibit 0x866e0fc)
	void Exhibit(class AFortExhibitActor*& TargetActor); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortCameraBase.BP_OnDeactivated (Has no native function)
	void BPOnDeactivated(class AFortPlayerController*& PlayerController); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortCameraBase.BP_OnActivated (Has no native function)
	void BPOnActivated(class AFortPlayerController*& PlayerController); // (Event | Public | BlueprintEvent)
};

