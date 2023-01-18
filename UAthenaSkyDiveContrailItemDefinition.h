// Class /Script/FortniteGame.AthenaSkyDiveContrailItemDefinition
// Size: 0x870
class UAthenaSkyDiveContrailItemDefinition : public UAthenaCosmeticItemDefinition
{
	struct TWeakObjectPtr<class UParticleSystem> ContrailEffect; // 0x7b0 (0x28)
	struct TWeakObjectPtr<class UParticleSystem> FrontEndContrailEffect; // 0x7d8 (0x28)
	struct TWeakObjectPtr<class UNiagaraSystem> NiagaraContrailEffect; // 0x800 (0x28)
	struct FVector DefaultVelocityVector; // 0x828 (0x18)
	struct FName VelocityVectorParameterName; // 0x840 (0x4)
	struct FName ParaGlideLeanParameterName; // 0x844 (0x4)
	struct TArray<struct FVectorParticleParameter> VectorParameters; // 0x848 (0x10)
	struct TArray<struct FFloatParticleParameter*> FloatParameters; // 0x858 (0x10)
	bool bWaitForFrontendSceneTransition; // 0x868 (0x1)
	unsigned char padding_869[0x7]; // 0x869 (0x7)

	/* Functions */

	// Function /Script/FortniteGame.AthenaSkyDiveContrailItemDefinition.GetContrailSoftPath (Underlying native function: GetContrailSoftPath 0x8760230)
	struct TWeakObjectPtr<class UFXSystemAsset> GetContrailSoftPath(bool& bInFrontend); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.AthenaSkyDiveContrailItemDefinition.GetContrailEffect (Underlying native function: GetContrailEffect 0x87601a0)
	class UFXSystemAsset* GetContrailEffect(bool& bInFrontend); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

