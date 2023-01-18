// Class /Script/FortniteGame.FortAircraft
// Size: 0x2c8
class AFortAircraft : public AActor
{
	int JumpFlashCount; // 0x288 (0x4)
	unsigned char unreflected_28c[0x4]; // 0x28c (0x4) 
	class UClass* CameraModeClass; // 0x290 (0x8)
	struct FRotator CameraInitialRotation; // 0x298 (0x18)
	struct FVector ExitLocation; // 0x2b0 (0x18)

	/* Functions */

	// Function /Script/FortniteGame.FortAircraft.PlayEffectsForPlayerJumped (Has no native function)
	void PlayEffectsForPlayerJumped(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.FortAircraft.OnRep_JumpFlashCount (Underlying native function: OnRep_JumpFlashCount 0x2792b78)
	void OnRepJumpFlashCount(); // (Final | Native | Protected)
};

