// ScriptStruct /Script/FortniteGame.FortCurieExecutionEntry
// Size: 0x88
struct FFortCurieExecutionEntry
{
	enum EFortCurieExecutionType ExecutionType; // 0x0 (0x1)
	enum EFortCurieApplicationEvent ApplicationEvent; // 0x1 (0x1)
	unsigned char unreflected_2[0x2]; // 0x2 (0x2) 
	struct FFortCurieExecutionFilter ExecutionFilter; // 0x4 (0x4)
	struct FFortCurieExecutionParams ExecutionParameters; // 0x8 (0x80)
};

