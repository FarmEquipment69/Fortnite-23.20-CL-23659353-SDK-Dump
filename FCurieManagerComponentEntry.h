// ScriptStruct /Script/Curie.CurieManagerComponentEntry
// Size: 0x20
struct FCurieManagerComponentEntry : FTableRowBase
{
	bool bIsActive; // 0x8 (0x1)
	enum ECurieManagerComponentPriority Priority; // 0x9 (0x1)
	unsigned char unreflected_a[0x6]; // 0xa (0x6) 
	class UClass* ManagerType; // 0x10 (0x8)
	class UCurieManagerComponentConfig* Config; // 0x18 (0x8)
};

