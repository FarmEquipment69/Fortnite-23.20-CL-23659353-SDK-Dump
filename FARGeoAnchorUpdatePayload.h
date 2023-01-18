// ScriptStruct /Script/AugmentedReality.ARGeoAnchorUpdatePayload
// Size: 0xa0
struct FARGeoAnchorUpdatePayload
{
	struct FARSessionPayload SessionPayload; // 0x0 (0x18)
	unsigned char unreflected_18[0x8]; // 0x18 (0x8) 
	struct FTransform WorldTransform; // 0x20 (0x60)
	float Longitude; // 0x80 (0x4)
	float Latitude; // 0x84 (0x4)
	float AltitudeMeters; // 0x88 (0x4)
	enum EARAltitudeSource AltitudeSource; // 0x8c (0x1)
	unsigned char unreflected_8d[0x3]; // 0x8d (0x3) 
	struct FString AnchorName; // 0x90 (0x10)
};

