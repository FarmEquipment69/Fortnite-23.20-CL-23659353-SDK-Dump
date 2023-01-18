// ScriptStruct /Script/WindRuntime.WindSplineBlockage
// Size: 0x30
struct FWindSplineBlockage : FFastArraySerializerItem
{
	struct FWindSplineBlockageID ID; // 0xc (0x4)
	struct TArray<struct FWindSplineSubDivBlockage*> SubDivBlockages; // 0x10 (0x10)
	float ActivationTime; // 0x20 (0x4)
	float DeactivationTime; // 0x24 (0x4)
	unsigned char padding_28[0x8]; // 0x28 (0x8)
};

