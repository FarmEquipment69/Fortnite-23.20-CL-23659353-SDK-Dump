// Class /Script/StaticMeshDescription.StaticMeshDescription
// Size: 0x2f0
class UStaticMeshDescription : public UMeshDescriptionBase
{

	/* Functions */

	// Function /Script/StaticMeshDescription.StaticMeshDescription.SetVertexInstanceUV (Underlying native function: SetVertexInstanceUV 0x999d5c4)
	void SetVertexInstanceUV(struct FVertexInstanceID& VertexInstanceID, struct FVector2D& uv, int& UVIndex); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/StaticMeshDescription.StaticMeshDescription.SetPolygonGroupMaterialSlotName (Underlying native function: SetPolygonGroupMaterialSlotName 0x999d4f4)
	void SetPolygonGroupMaterialSlotName(struct FPolygonGroupID& PolygonGroupID, struct FName& SlotName); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/StaticMeshDescription.StaticMeshDescription.GetVertexInstanceUV (Underlying native function: GetVertexInstanceUV 0x999d428)
	struct FVector2D GetVertexInstanceUV(struct FVertexInstanceID& VertexInstanceID, int& UVIndex); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/StaticMeshDescription.StaticMeshDescription.CreateCube (Underlying native function: CreateCube 0x999d110)
	void CreateCube(struct FVector& Center, struct FVector& HalfExtents, struct FPolygonGroupID& PolygonGroup, struct FPolygonID& PolygonIDPlusX, struct FPolygonID& PolygonIDMinusX, struct FPolygonID& PolygonIDPlusY, struct FPolygonID& PolygonIDMinusY, struct FPolygonID& PolygonIDPlusZ, struct FPolygonID& PolygonIDMinusZ); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)
};

