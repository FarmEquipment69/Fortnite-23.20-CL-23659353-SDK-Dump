// Class /Script/Engine.DrawFrustumComponent
// Size: 0x560
class UDrawFrustumComponent : public UPrimitiveComponent
{
	bool bFrustumEnabled; // 0x540 (0x1)
	unsigned char unreflected_541[0x3]; // 0x541 (0x3) 
	struct FColor FrustumColor; // 0x544 (0x4)
	float FrustumAngle; // 0x548 (0x4)
	float FrustumAspectRatio; // 0x54c (0x4)
	float FrustumStartDist; // 0x550 (0x4)
	float FrustumEndDist; // 0x554 (0x4)
	class UTexture* Texture; // 0x558 (0x8)
};

