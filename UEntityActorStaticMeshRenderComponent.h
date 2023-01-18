// Class /Script/EntityActor.EntityActorStaticMeshRenderComponent
// Size: 0xa8
class UEntityActorStaticMeshRenderComponent : public UEntityActorComponent
{
	struct TArray<class UMaterialInterface*> ShadowVarMeshMaterials; // 0x90 (0x10)
	struct TEnumAsByte<ECollisionEnabled> ShadowVarEnableCollision; // 0xa0 (0x1)
	unsigned char unreflected_a1[0x3]; // 0xa1 (0x3) 
	float ShadowVarMaxDrawDistance; // 0xa4 (0x4)

	/* Functions */

	// Function /Script/EntityActor.EntityActorStaticMeshRenderComponent.OnRep_MeshMaterials (Underlying native function: OnRep_MeshMaterials 0x6a5b4dc)
	void OnRepMeshMaterials(); // (Final | Native | Private)

	// Function /Script/EntityActor.EntityActorStaticMeshRenderComponent.OnRep_MaxDrawDistance (Underlying native function: OnRep_MaxDrawDistance 0x6a5b4c0)
	void OnRepMaxDrawDistance(); // (Final | Native | Private)

	// Function /Script/EntityActor.EntityActorStaticMeshRenderComponent.OnRep_EnableCollision (Underlying native function: OnRep_EnableCollision 0x6a5b4a4)
	void OnRepEnableCollision(); // (Final | Native | Private)
};

