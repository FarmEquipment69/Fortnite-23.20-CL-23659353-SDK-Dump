// Class /Script/FortniteGame.FortCinematicCameraActor
// Size: 0xa60
class AFortCinematicCameraActor : public ACineCameraActor
{
	bool bSetFinalControlRotation; // 0xa10 (0x1)
	unsigned char unreflected_a11[0x7]; // 0xa11 (0x7) 
	struct TWeakObjectPtr<class AActor> FocusedActor; // 0xa18 (0x28)
	struct FRotator FinalControlRotation; // 0xa40 (0x18)
	unsigned char padding_a58[0x8]; // 0xa58 (0x8)
};

