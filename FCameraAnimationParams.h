// ScriptStruct /Script/GameplayCameras.CameraAnimationParams
// Size: 0x40
struct FCameraAnimationParams
{
	float PlayRate; // 0x0 (0x4)
	float Scale; // 0x4 (0x4)
	enum ECameraAnimationEasingType EaseInType; // 0x8 (0x1)
	unsigned char unreflected_9[0x3]; // 0x9 (0x3) 
	float EaseInDuration; // 0xc (0x4)
	enum ECameraAnimationEasingType EaseOutType; // 0x10 (0x1)
	unsigned char unreflected_11[0x3]; // 0x11 (0x3) 
	float EaseOutDuration; // 0x14 (0x4)
	bool bLoop; // 0x18 (0x1)
	bool bRandomStartTime; // 0x19 (0x1)
	unsigned char unreflected_1a[0x2]; // 0x1a (0x2) 
	float DurationOverride; // 0x1c (0x4)
	enum ECameraAnimationPlaySpace Playspace; // 0x20 (0x1)
	unsigned char unreflected_21[0x7]; // 0x21 (0x7) 
	struct FRotator UserPlaySpaceRot; // 0x28 (0x18)
};

