// ScriptStruct /Script/Niagara.NiagaraEventScriptProperties
// Size: 0x58
struct FNiagaraEventScriptProperties : FNiagaraEmitterScriptProperties
{
	enum EScriptExecutionMode ExecutionMode; // 0x28 (0x1)
	unsigned char unreflected_29[0x3]; // 0x29 (0x3) 
	uint32_t SpawnNumber; // 0x2c (0x4)
	uint32_t MaxEventsPerFrame; // 0x30 (0x4)
	struct FGuid SourceEmitterID; // 0x34 (0x10)
	struct FName SourceEventName; // 0x44 (0x4)
	bool bRandomSpawnNumber; // 0x48 (0x1)
	unsigned char unreflected_49[0x3]; // 0x49 (0x3) 
	uint32_t MinSpawnNumber; // 0x4c (0x4)
	bool UpdateAttributeInitialValues; // 0x50 (0x1)
	unsigned char padding_51[0x7]; // 0x51 (0x7)
};

