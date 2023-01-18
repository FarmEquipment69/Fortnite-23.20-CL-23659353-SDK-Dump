// Class /Script/Niagara.NiagaraFunctionLibrary
// Size: 0x28
class UNiagaraFunctionLibrary : public UBlueprintFunctionLibrary
{

	/* Functions */

	// Function /Script/Niagara.NiagaraFunctionLibrary.SpawnSystemAttachedWithParams (Underlying native function: SpawnSystemAttachedWithParams 0x6c9c508)
	static class UNiagaraComponent* SpawnSystemAttachedWithParams(struct FFXSystemSpawnParameters& SpawnParams); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Niagara.NiagaraFunctionLibrary.SpawnSystemAttached (Underlying native function: SpawnSystemAttached 0xfae218)
	static class UNiagaraComponent* SpawnSystemAttached(class UNiagaraSystem*& SystemTemplate, class USceneComponent*& AttachToComponent, struct FName& AttachPointName, struct FVector& Location, struct FRotator& Rotation, struct TEnumAsByte<EAttachLocation>& LocationType, bool& bAutoDestroy, bool& bAutoActivate, enum ENCPoolMethod& PoolingMethod, bool& bPreCullCheck); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable)

	// Function /Script/Niagara.NiagaraFunctionLibrary.SpawnSystemAtLocationWithParams (Underlying native function: SpawnSystemAtLocationWithParams 0x6c9c470)
	static class UNiagaraComponent* SpawnSystemAtLocationWithParams(struct FFXSystemSpawnParameters& SpawnParams); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Niagara.NiagaraFunctionLibrary.SpawnSystemAtLocation (Underlying native function: SpawnSystemAtLocation 0xeca9d8)
	static class UNiagaraComponent* SpawnSystemAtLocation(class UObject*& WorldContextObject, class UNiagaraSystem*& SystemTemplate, struct FVector& Location, struct FRotator& Rotation, struct FVector& Scale, bool& bAutoDestroy, bool& bAutoActivate, enum ENCPoolMethod& PoolingMethod, bool& bPreCullCheck); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable)

	// Function /Script/Niagara.NiagaraFunctionLibrary.SetVolumeTextureObject (Underlying native function: SetVolumeTextureObject 0x6c9c298)
	static void SetVolumeTextureObject(class UNiagaraComponent*& NiagaraSystem, struct FString& OverrideName, class UVolumeTexture*& Texture); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/Niagara.NiagaraFunctionLibrary.SetTextureObject (Underlying native function: SetTextureObject 0x6c9c298)
	static void SetTextureObject(class UNiagaraComponent*& NiagaraSystem, struct FString& OverrideName, class UTexture*& Texture); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/Niagara.NiagaraFunctionLibrary.SetTexture2DArrayObject (Underlying native function: SetTexture2DArrayObject 0x6c9c298)
	static void SetTexture2DArrayObject(class UNiagaraComponent*& NiagaraSystem, struct FString& OverrideName, class UTexture2DArray*& Texture); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/Niagara.NiagaraFunctionLibrary.SetSkeletalMeshDataInterfaceSamplingRegions (Underlying native function: SetSkeletalMeshDataInterfaceSamplingRegions 0x6c9bf6c)
	static void SetSkeletalMeshDataInterfaceSamplingRegions(class UNiagaraComponent*& NiagaraSystem, struct FString& OverrideName, struct TArray<struct FName>& SamplingRegions); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Niagara.NiagaraFunctionLibrary.SetSkeletalMeshDataInterfaceFilteredSockets (Underlying native function: SetSkeletalMeshDataInterfaceFilteredSockets 0x6c9bc40)
	static void SetSkeletalMeshDataInterfaceFilteredSockets(class UNiagaraComponent*& NiagaraSystem, struct FString& OverrideName, struct TArray<struct FName>& FilteredSockets); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Niagara.NiagaraFunctionLibrary.SetSkeletalMeshDataInterfaceFilteredBones (Underlying native function: SetSkeletalMeshDataInterfaceFilteredBones 0x6c9b914)
	static void SetSkeletalMeshDataInterfaceFilteredBones(class UNiagaraComponent*& NiagaraSystem, struct FString& OverrideName, struct TArray<struct FName>& FilteredBones); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Niagara.NiagaraFunctionLibrary.SetComponentNiagaraGPURayTracedCollisionGroup (Underlying native function: SetComponentNiagaraGPURayTracedCollisionGroup 0x6c9b734)
	static void SetComponentNiagaraGPURayTracedCollisionGroup(class UObject*& WorldContextObject, class UPrimitiveComponent*& Primitive, int& CollisionGroup); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/Niagara.NiagaraFunctionLibrary.SetActorNiagaraGPURayTracedCollisionGroup (Underlying native function: SetActorNiagaraGPURayTracedCollisionGroup 0x6c9b5f4)
	static void SetActorNiagaraGPURayTracedCollisionGroup(class UObject*& WorldContextObject, class AActor*& Actor, int& CollisionGroup); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/Niagara.NiagaraFunctionLibrary.ReleaseNiagaraGPURayTracedCollisionGroup (Underlying native function: ReleaseNiagaraGPURayTracedCollisionGroup 0x6c9b4ec)
	static void ReleaseNiagaraGPURayTracedCollisionGroup(class UObject*& WorldContextObject, int& CollisionGroup); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/Niagara.NiagaraFunctionLibrary.OverrideSystemUserVariableStaticMeshComponent (Underlying native function: OverrideSystemUserVariableStaticMeshComponent 0x6c9b314)
	static void OverrideSystemUserVariableStaticMeshComponent(class UNiagaraComponent*& NiagaraSystem, struct FString& OverrideName, class UStaticMeshComponent*& StaticMeshComponent); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/Niagara.NiagaraFunctionLibrary.OverrideSystemUserVariableStaticMesh (Underlying native function: OverrideSystemUserVariableStaticMesh 0x6c9b13c)
	static void OverrideSystemUserVariableStaticMesh(class UNiagaraComponent*& NiagaraSystem, struct FString& OverrideName, class UStaticMesh*& StaticMesh); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/Niagara.NiagaraFunctionLibrary.OverrideSystemUserVariableSkeletalMeshComponent (Underlying native function: OverrideSystemUserVariableSkeletalMeshComponent 0x1440f34)
	static void OverrideSystemUserVariableSkeletalMeshComponent(class UNiagaraComponent*& NiagaraSystem, struct FString& OverrideName, class USkeletalMeshComponent*& SkeletalMeshComponent); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/Niagara.NiagaraFunctionLibrary.GetNiagaraParameterCollection (Underlying native function: GetNiagaraParameterCollection 0x6c9b078)
	static class UNiagaraParameterCollectionInstance* GetNiagaraParameterCollection(class UObject*& WorldContextObject, class UNiagaraParameterCollection*& Collection); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/Niagara.NiagaraFunctionLibrary.AcquireNiagaraGPURayTracedCollisionGroup (Underlying native function: AcquireNiagaraGPURayTracedCollisionGroup 0x6c9afd0)
	static int AcquireNiagaraGPURayTracedCollisionGroup(class UObject*& WorldContextObject); // (Final | Native | Static | Public | BlueprintCallable)
};

