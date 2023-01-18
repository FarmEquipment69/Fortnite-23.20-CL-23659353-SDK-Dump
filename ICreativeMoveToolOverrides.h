// Class /Script/FortniteGame.CreativeMoveToolOverrides
// Size: 0x28
class ICreativeMoveToolOverrides : public IInterface
{

	/* Functions */

	// Function /Script/FortniteGame.CreativeMoveToolOverrides.GetMeshComponents (Has no native function)
	struct TArray<class UMeshComponent*> GetMeshComponents(); // (Event | Public | BlueprintCallable | BlueprintEvent | BlueprintPure | Const)

	// Function /Script/FortniteGame.CreativeMoveToolOverrides.GetCollisionStaticMesh (Has no native function)
	class UStaticMesh* GetCollisionStaticMesh(struct FVector& OutOffset); // (Event | Public | HasOutParms | HasDefaults | BlueprintEvent | Const)
};

