// Class /Script/Niagara.NiagaraSimCache
// Size: 0x170
class UNiagaraSimCache : public UObject
{
	struct TWeakObjectPtr<class UNiagaraSystem> SoftNiagaraSystem; // 0x28 (0x28)
	float StartSeconds; // 0x50 (0x4)
	float DurationSeconds; // 0x54 (0x4)
	struct FNiagaraSimCacheCreateParameters CreateParameters; // 0x58 (0x38)
	bool bNeedsReadComponentMappingRecache; // 0x90 (0x1)
	unsigned char unreflected_91[0x7]; // 0x91 (0x7) 
	struct FNiagaraSimCacheLayout CacheLayout; // 0x98 (0x70)
	struct TArray<struct FNiagaraSimCacheFrame> CacheFrames; // 0x108 (0x10)
	struct TMap<struct FNiagaraVariableBase*, class UObject*> DataInterfaceStorage; // 0x118 (0x50)
	unsigned char padding_168[0x8]; // 0x168 (0x8)

	/* Functions */

	// Function /Script/Niagara.NiagaraSimCache.ReadVectorAttribute (Underlying native function: ReadVectorAttribute 0x6ce8920)
	void ReadVectorAttribute(struct TArray<struct FVector>& OutValues, struct FName& AttributeName, struct FName& EmitterName, int& FrameIndex); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Niagara.NiagaraSimCache.ReadVector4Attribute (Underlying native function: ReadVector4Attribute 0x6ce87a4)
	void ReadVector4Attribute(struct TArray<struct FVector4>& OutValues, struct FName& AttributeName, struct FName& EmitterName, int& FrameIndex); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Niagara.NiagaraSimCache.ReadVector2Attribute (Underlying native function: ReadVector2Attribute 0x6ce8628)
	void ReadVector2Attribute(struct TArray<struct FVector2D>& OutValues, struct FName& AttributeName, struct FName& EmitterName, int& FrameIndex); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Niagara.NiagaraSimCache.ReadQuatAttributeWithRebase (Underlying native function: ReadQuatAttributeWithRebase 0x6ce8454)
	void ReadQuatAttributeWithRebase(struct TArray<struct FQuat>& OutValues, struct FQuat& Quat, struct FName& AttributeName, struct FName& EmitterName, int& FrameIndex); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Niagara.NiagaraSimCache.ReadQuatAttribute (Underlying native function: ReadQuatAttribute 0x6ce8294)
	void ReadQuatAttribute(struct TArray<struct FQuat>& OutValues, struct FName& AttributeName, struct FName& EmitterName, bool& bLocalSpaceToWorld, int& FrameIndex); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Niagara.NiagaraSimCache.ReadPositionAttributeWithRebase (Underlying native function: ReadPositionAttributeWithRebase 0x6ce8028)
	void ReadPositionAttributeWithRebase(struct TArray<struct FVector>& OutValues, struct FTransform& Transform, struct FName& AttributeName, struct FName& EmitterName, int& FrameIndex); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Niagara.NiagaraSimCache.ReadPositionAttribute (Underlying native function: ReadPositionAttribute 0x6ce7e68)
	void ReadPositionAttribute(struct TArray<struct FVector>& OutValues, struct FName& AttributeName, struct FName& EmitterName, bool& bLocalSpaceToWorld, int& FrameIndex); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Niagara.NiagaraSimCache.ReadIntAttribute (Underlying native function: ReadIntAttribute 0x6ce7cec)
	void ReadIntAttribute(struct TArray<int>& OutValues, struct FName& AttributeName, struct FName& EmitterName, int& FrameIndex); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Niagara.NiagaraSimCache.ReadFloatAttribute (Underlying native function: ReadFloatAttribute 0x6ce7b70)
	void ReadFloatAttribute(struct TArray<float>& OutValues, struct FName& AttributeName, struct FName& EmitterName, int& FrameIndex); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Niagara.NiagaraSimCache.ReadColorAttribute (Underlying native function: ReadColorAttribute 0x6ce79f4)
	void ReadColorAttribute(struct TArray<struct FLinearColor>& OutValues, struct FName& AttributeName, struct FName& EmitterName, int& FrameIndex); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Niagara.NiagaraSimCache.IsEmpty (Underlying native function: IsEmpty 0x6ce79dc)
	bool IsEmpty(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Niagara.NiagaraSimCache.IsCacheValid (Underlying native function: IsCacheValid 0x6ce79c4)
	bool IsCacheValid(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Niagara.NiagaraSimCache.GetStartSeconds (Underlying native function: GetStartSeconds 0x242f83c)
	float GetStartSeconds(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Niagara.NiagaraSimCache.GetNumFrames (Underlying native function: GetNumFrames 0x6ce79ac)
	int GetNumFrames(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Niagara.NiagaraSimCache.GetNumEmitters (Underlying native function: GetNumEmitters 0x6a4ad48)
	int GetNumEmitters(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Niagara.NiagaraSimCache.GetEmitterNames (Underlying native function: GetEmitterNames 0x6ce792c)
	struct TArray<struct FName> GetEmitterNames(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Niagara.NiagaraSimCache.GetEmitterName (Underlying native function: GetEmitterName 0x6ce7884)
	struct FName GetEmitterName(int& EmitterIndex); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Niagara.NiagaraSimCache.GetAttributeCaptureMode (Underlying native function: GetAttributeCaptureMode 0x6ce7870)
	enum ENiagaraSimCacheAttributeCaptureMode GetAttributeCaptureMode(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

