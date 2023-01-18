// Class /Script/StateTreeModule.StateTree
// Size: 0x190
class UStateTree : public UDataAsset
{
	class UStateTreeSchema* Schema; // 0x30 (0x8)
	struct TArray<struct FCompactStateTreeState> States; // 0x38 (0x10)
	struct TArray<struct FCompactStateTransition> Transitions; // 0x48 (0x10)
	struct FInstancedStructArray Nodes; // 0x58 (0x10)
	struct FStateTreeInstanceData DefaultInstanceData; // 0x68 (0x30)
	struct FStateTreeInstanceData SharedInstanceData; // 0x98 (0x30)
	unsigned char unreflected_c8[0x18]; // 0xc8 (0x18) 
	struct TArray<struct FStateTreeExternalDataDesc> ContextDataDescs; // 0xe0 (0x10)
	struct FStateTreePropertyBindings PropertyBindings; // 0xf0 (0x68)
	struct FInstancedPropertyBag Parameters; // 0x158 (0x10)
	struct FStateTreeIndex8 ParametersDataViewIndex; // 0x168 (0x1)
	unsigned char unreflected_169[0x1]; // 0x169 (0x1) 
	uint16_t EvaluatorsBegin; // 0x16a (0x2)
	uint16_t EvaluatorsNum; // 0x16c (0x2)
	unsigned char unreflected_16e[0x2]; // 0x16e (0x2) 
	struct TArray<struct FStateTreeExternalDataDesc> ExternalDataDescs; // 0x170 (0x10)
	int ExternalDataBaseIndex; // 0x180 (0x4)
	int NumDataViews; // 0x184 (0x4)
	unsigned char padding_188[0x8]; // 0x188 (0x8)
};

