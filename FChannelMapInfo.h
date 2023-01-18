// ScriptStruct /Script/ControlRig.ChannelMapInfo
// Size: 0x38
struct FChannelMapInfo
{
	int ControlIndex; // 0x0 (0x4)
	int TotalChannelIndex; // 0x4 (0x4)
	int ChannelIndex; // 0x8 (0x4)
	int ParentControlIndex; // 0xc (0x4)
	struct FName ChannelTypeName; // 0x10 (0x4)
	bool bDoesHaveSpace; // 0x14 (0x1)
	unsigned char unreflected_15[0x3]; // 0x15 (0x3) 
	int SpaceChannelIndex; // 0x18 (0x4)
	int MaskIndex; // 0x1c (0x4)
	int CategoryIndex; // 0x20 (0x4)
	unsigned char unreflected_24[0x4]; // 0x24 (0x4) 
	struct TArray<uint32_t> ConstraintsIndex; // 0x28 (0x10)
};

