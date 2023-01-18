// ScriptStruct /Script/StateTreeModule.StateTreeExternalDataDesc
// Size: 0x10
struct FStateTreeExternalDataDesc
{
	class UStruct* Struct; // 0x0 (0x8)
	struct FName Name; // 0x8 (0x4)
	struct FStateTreeExternalDataHandle Handle; // 0xc (0x1)
	enum EStateTreeExternalDataRequirement Requirement; // 0xd (0x1)
	unsigned char padding_e[0x2]; // 0xe (0x2)
};

