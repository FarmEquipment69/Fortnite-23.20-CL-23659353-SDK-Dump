// ScriptStruct /Script/FortniteGame.MutatorInstanceData
// Size: 0x38
struct FMutatorInstanceData
{
	enum EMutatorAddTarget Target; // 0x0 (0x1)
	unsigned char unreflected_1[0x7]; // 0x1 (0x7) 
	struct TWeakObjectPtr<class AFortGameplayMutator> MutatorInstance; // 0x8 (0x28)
	unsigned char padding_30[0x8]; // 0x30 (0x8)
};

