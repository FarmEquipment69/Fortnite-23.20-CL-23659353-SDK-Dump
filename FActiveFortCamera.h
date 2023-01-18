// ScriptStruct /Script/FortniteGame.ActiveFortCamera
// Size: 0x20
struct FActiveFortCamera
{
	class UFortCameraMode* Camera; // 0x0 (0x8)
	class AActor* ViewTarget; // 0x8 (0x8)
	float TransitionAlpha; // 0x10 (0x4)
	float TransitionUpdateRate; // 0x14 (0x4)
	float BlendWeight; // 0x18 (0x4)
	unsigned char padding_1c[0x4]; // 0x1c (0x4)
};

