// ScriptStruct /Script/Engine.BroadphaseSettings
// Size: 0x80
struct FBroadphaseSettings
{
	bool bUseMBPOnClient; // 0x0 (0x1)
	bool bUseMBPOnServer; // 0x1 (0x1)
	bool bUseMBPOuterBounds; // 0x2 (0x1)
	unsigned char unreflected_3[0x5]; // 0x3 (0x5) 
	struct FBox MBPBounds; // 0x8 (0x38)
	struct FBox MBPOuterBounds; // 0x40 (0x38)
	uint32_t MBPNumSubdivs; // 0x78 (0x4)
	unsigned char padding_7c[0x4]; // 0x7c (0x4)
};

