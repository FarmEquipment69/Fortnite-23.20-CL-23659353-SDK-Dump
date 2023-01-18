// ScriptStruct /Script/Engine.ClassRedirect
// Size: 0x20
struct FClassRedirect
{
	struct FName ObjectName; // 0x0 (0x4)
	struct FName OldClassName; // 0x4 (0x4)
	struct FName NewClassName; // 0x8 (0x4)
	struct FName OldSubobjName; // 0xc (0x4)
	struct FName NewSubobjName; // 0x10 (0x4)
	struct FName NewClassClass; // 0x14 (0x4)
	struct FName NewClassPackage; // 0x18 (0x4)
	bool InstanceOnly; // 0x1c (0x1)
	unsigned char padding_1d[0x3]; // 0x1d (0x3)
};

