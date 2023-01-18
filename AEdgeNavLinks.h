// Class /Script/FortniteAI.EdgeNavLinks
// Size: 0x328
class AEdgeNavLinks : public ANavLinkProxy
{
	float DistanceBetweenLinks; // 0x2d8 (0x4)
	unsigned char unreflected_2dc[0x4]; // 0x2dc (0x4) 
	struct FVector Start; // 0x2e0 (0x18)
	struct FVector End; // 0x2f8 (0x18)
	float SnapRadius; // 0x310 (0x4)
	float SnapHeight; // 0x314 (0x4)
	float LinkProjectionHeight; // 0x318 (0x4)
	float RightLinkForwardOffset; // 0x31c (0x4)
	struct TEnumAsByte<ECollisionChannel> CollisionChannel; // 0x320 (0x1)
	unsigned char unreflected_321[0x3]; // 0x321 (0x3) 
	unsigned char bManualAdjustment; // 0x324 (0x1)
	unsigned char padding_325[0x3]; // 0x325 (0x3)
};

