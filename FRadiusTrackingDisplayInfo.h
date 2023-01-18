// ScriptStruct /Script/FortniteGame.RadiusTrackingDisplayInfo
// Size: 0x60
struct FRadiusTrackingDisplayInfo : FFastArraySerializerItem
{
	unsigned char unreflected_c[0x4]; // 0xc (0x4) 
	class AActor* TrackedActor; // 0x10 (0x8)
	struct FVector2D TrackedCenter; // 0x18 (0x10)
	float TrackedRadius; // 0x28 (0x4)
	struct FLinearColor CircleColor; // 0x2c (0x10)
	unsigned char unreflected_3c[0x4]; // 0x3c (0x4) 
	class UMaterialInterface* CircleMaterial; // 0x40 (0x8)
	class UMaterialInstanceDynamic* MiniMapMID; // 0x48 (0x8)
	class UMaterialInstanceDynamic* FullMapMID; // 0x50 (0x8)
	class UFortControllerComponent_RadiusTracker* RadiusTrackerComponent; // 0x58 (0x8)
};

