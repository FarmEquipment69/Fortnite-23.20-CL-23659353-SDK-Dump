// Class /Script/Engine.UserDefinedStruct
// Size: 0x108
class UUserDefinedStruct : public UScriptStruct
{
	struct TEnumAsByte<EUserDefinedStructureStatus> Status; // 0xc0 (0x1)
	unsigned char unreflected_c1[0x3]; // 0xc1 (0x3) 
	struct FGuid Guid; // 0xc4 (0x10)
	unsigned char padding_d4[0x34]; // 0xd4 (0x34)
};

