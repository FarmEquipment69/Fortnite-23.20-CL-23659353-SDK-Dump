// Class /Script/MeshDescription.MeshDescriptionBase
// Size: 0x2f0
class UMeshDescriptionBase : public UObject
{
	unsigned char unreflected_2f0[0x2f0]; 

	/* Functions */

	// Function /Script/MeshDescription.MeshDescriptionBase.SetVertexPosition (Underlying native function: SetVertexPosition 0x999758c)
	void SetVertexPosition(struct FVertexID& VertexID, struct FVector& Position); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/MeshDescription.MeshDescriptionBase.SetPolygonVertexInstances (Underlying native function: SetPolygonVertexInstances 0x99973e8)
	void SetPolygonVertexInstances(struct FPolygonID& PolygonID, struct TArray<struct FVertexInstanceID>& VertexInstanceIDs); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/MeshDescription.MeshDescriptionBase.SetPolygonPolygonGroup (Underlying native function: SetPolygonPolygonGroup 0x9997324)
	void SetPolygonPolygonGroup(struct FPolygonID& PolygonID, struct FPolygonGroupID& PolygonGroupID); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/MeshDescription.MeshDescriptionBase.ReversePolygonFacing (Underlying native function: ReversePolygonFacing 0x9997278)
	void ReversePolygonFacing(struct FPolygonID& PolygonID); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/MeshDescription.MeshDescriptionBase.ReserveNewVertices (Underlying native function: ReserveNewVertices 0x99971f8)
	void ReserveNewVertices(int& NumberOfNewVertices); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/MeshDescription.MeshDescriptionBase.ReserveNewVertexInstances (Underlying native function: ReserveNewVertexInstances 0x9996fb0)
	void ReserveNewVertexInstances(int& NumberOfNewVertexInstances); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/MeshDescription.MeshDescriptionBase.ReserveNewTriangles (Underlying native function: ReserveNewTriangles 0x9997160)
	void ReserveNewTriangles(int& NumberOfNewTriangles); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/MeshDescription.MeshDescriptionBase.ReserveNewPolygons (Underlying native function: ReserveNewPolygons 0x99970c8)
	void ReserveNewPolygons(int& NumberOfNewPolygons); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/MeshDescription.MeshDescriptionBase.ReserveNewPolygonGroups (Underlying native function: ReserveNewPolygonGroups 0x9997030)
	void ReserveNewPolygonGroups(int& NumberOfNewPolygonGroups); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/MeshDescription.MeshDescriptionBase.ReserveNewEdges (Underlying native function: ReserveNewEdges 0x9996fb0)
	void ReserveNewEdges(int& NumberOfNewEdges); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/MeshDescription.MeshDescriptionBase.IsVertexValid (Underlying native function: IsVertexValid 0x9996ee0)
	bool IsVertexValid(struct FVertexID& VertexID); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/MeshDescription.MeshDescriptionBase.IsVertexOrphaned (Underlying native function: IsVertexOrphaned 0x9996e24)
	bool IsVertexOrphaned(struct FVertexID& VertexID); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/MeshDescription.MeshDescriptionBase.IsVertexInstanceValid (Underlying native function: IsVertexInstanceValid 0x9996d54)
	bool IsVertexInstanceValid(struct FVertexInstanceID& VertexInstanceID); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/MeshDescription.MeshDescriptionBase.IsTriangleValid (Underlying native function: IsTriangleValid 0x9996c84)
	bool IsTriangleValid(struct FTriangleID& TriangleID); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/MeshDescription.MeshDescriptionBase.IsTrianglePartOfNgon (Underlying native function: IsTrianglePartOfNgon 0x9996b98)
	bool IsTrianglePartOfNgon(struct FTriangleID& TriangleID); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/MeshDescription.MeshDescriptionBase.IsPolygonValid (Underlying native function: IsPolygonValid 0x9996ac8)
	bool IsPolygonValid(struct FPolygonID& PolygonID); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/MeshDescription.MeshDescriptionBase.IsPolygonGroupValid (Underlying native function: IsPolygonGroupValid 0x99969f8)
	bool IsPolygonGroupValid(struct FPolygonGroupID& PolygonGroupID); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/MeshDescription.MeshDescriptionBase.IsEmpty (Underlying native function: IsEmpty 0x9996968)
	bool IsEmpty(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/MeshDescription.MeshDescriptionBase.IsEdgeValid (Underlying native function: IsEdgeValid 0x9996898)
	bool IsEdgeValid(struct FEdgeID& EdgeID); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/MeshDescription.MeshDescriptionBase.IsEdgeInternalToPolygon (Underlying native function: IsEdgeInternalToPolygon 0x99967d4)
	bool IsEdgeInternalToPolygon(struct FEdgeID& EdgeID, struct FPolygonID& PolygonID); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/MeshDescription.MeshDescriptionBase.IsEdgeInternal (Underlying native function: IsEdgeInternal 0x9996714)
	bool IsEdgeInternal(struct FEdgeID& EdgeID); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/MeshDescription.MeshDescriptionBase.GetVertexVertexInstances (Underlying native function: GetVertexVertexInstances 0x9996520)
	void GetVertexVertexInstances(struct FVertexID& VertexID, struct TArray<struct FVertexInstanceID>& OutVertexInstanceIDs); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/MeshDescription.MeshDescriptionBase.GetVertexPosition (Underlying native function: GetVertexPosition 0x9996480)
	struct FVector GetVertexPosition(struct FVertexID& VertexID); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/MeshDescription.MeshDescriptionBase.GetVertexPairEdge (Underlying native function: GetVertexPairEdge 0x99963b4)
	struct FEdgeID GetVertexPairEdge(struct FVertexID& VertexID0, struct FVertexID& VertexID1); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/MeshDescription.MeshDescriptionBase.GetVertexInstanceVertex (Underlying native function: GetVertexInstanceVertex 0x99962d8)
	struct FVertexID GetVertexInstanceVertex(struct FVertexInstanceID& VertexInstanceID); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/MeshDescription.MeshDescriptionBase.GetVertexInstancePairEdge (Underlying native function: GetVertexInstancePairEdge 0x999620c)
	struct FEdgeID GetVertexInstancePairEdge(struct FVertexInstanceID& VertexInstanceID0, struct FVertexInstanceID& VertexInstanceID1); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/MeshDescription.MeshDescriptionBase.GetVertexInstanceForTriangleVertex (Underlying native function: GetVertexInstanceForTriangleVertex 0x999610c)
	struct FVertexInstanceID GetVertexInstanceForTriangleVertex(struct FTriangleID& TriangleID, struct FVertexID& VertexID); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/MeshDescription.MeshDescriptionBase.GetVertexInstanceForPolygonVertex (Underlying native function: GetVertexInstanceForPolygonVertex 0x999600c)
	struct FVertexInstanceID GetVertexInstanceForPolygonVertex(struct FPolygonID& PolygonID, struct FVertexID& VertexID); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/MeshDescription.MeshDescriptionBase.GetVertexInstanceCount (Underlying native function: GetVertexInstanceCount 0x9995fe0)
	int GetVertexInstanceCount(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/MeshDescription.MeshDescriptionBase.GetVertexInstanceConnectedTriangles (Underlying native function: GetVertexInstanceConnectedTriangles 0x9995de8)
	void GetVertexInstanceConnectedTriangles(struct FVertexInstanceID& VertexInstanceID, struct TArray<struct FTriangleID>& OutConnectedTriangleIDs); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/MeshDescription.MeshDescriptionBase.GetVertexInstanceConnectedPolygons (Underlying native function: GetVertexInstanceConnectedPolygons 0x9995c18)
	void GetVertexInstanceConnectedPolygons(struct FVertexInstanceID& VertexInstanceID, struct TArray<struct FPolygonID>& OutConnectedPolygonIDs); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/MeshDescription.MeshDescriptionBase.GetVertexCount (Underlying native function: GetVertexCount 0x9995bec)
	int GetVertexCount(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/MeshDescription.MeshDescriptionBase.GetVertexConnectedTriangles (Underlying native function: GetVertexConnectedTriangles 0x9995a20)
	void GetVertexConnectedTriangles(struct FVertexID& VertexID, struct TArray<struct FTriangleID>& OutConnectedTriangleIDs); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/MeshDescription.MeshDescriptionBase.GetVertexConnectedPolygons (Underlying native function: GetVertexConnectedPolygons 0x9995854)
	void GetVertexConnectedPolygons(struct FVertexID& VertexID, struct TArray<struct FPolygonID>& OutConnectedPolygonIDs); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/MeshDescription.MeshDescriptionBase.GetVertexConnectedEdges (Underlying native function: GetVertexConnectedEdges 0x9995660)
	void GetVertexConnectedEdges(struct FVertexID& VertexID, struct TArray<struct FEdgeID>& OutEdgeIDs); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/MeshDescription.MeshDescriptionBase.GetVertexAdjacentVertices (Underlying native function: GetVertexAdjacentVertices 0x9995494)
	void GetVertexAdjacentVertices(struct FVertexID& VertexID, struct TArray<struct FVertexID>& OutAdjacentVertexIDs); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/MeshDescription.MeshDescriptionBase.GetTriangleVertices (Underlying native function: GetTriangleVertices 0x99952f0)
	void GetTriangleVertices(struct FTriangleID& TriangleID, struct TArray<struct FVertexID>& OutVertexIDs); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/MeshDescription.MeshDescriptionBase.GetTriangleVertexInstances (Underlying native function: GetTriangleVertexInstances 0x999514c)
	void GetTriangleVertexInstances(struct FTriangleID& TriangleID, struct TArray<struct FVertexInstanceID>& OutVertexInstanceIDs); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/MeshDescription.MeshDescriptionBase.GetTriangleVertexInstance (Underlying native function: GetTriangleVertexInstance 0x9995028)
	struct FVertexInstanceID GetTriangleVertexInstance(struct FTriangleID& TriangleID, int& Index); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/MeshDescription.MeshDescriptionBase.GetTrianglePolygonGroup (Underlying native function: GetTrianglePolygonGroup 0x9994f4c)
	struct FPolygonGroupID GetTrianglePolygonGroup(struct FTriangleID& TriangleID); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/MeshDescription.MeshDescriptionBase.GetTrianglePolygon (Underlying native function: GetTrianglePolygon 0x9994e70)
	struct FPolygonID GetTrianglePolygon(struct FTriangleID& TriangleID); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/MeshDescription.MeshDescriptionBase.GetTriangleEdges (Underlying native function: GetTriangleEdges 0x9994ccc)
	void GetTriangleEdges(struct FTriangleID& TriangleID, struct TArray<struct FEdgeID>& OutEdgeIDs); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/MeshDescription.MeshDescriptionBase.GetTriangleCount (Underlying native function: GetTriangleCount 0x9994ca0)
	int GetTriangleCount(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/MeshDescription.MeshDescriptionBase.GetTriangleAdjacentTriangles (Underlying native function: GetTriangleAdjacentTriangles 0x9994ad0)
	void GetTriangleAdjacentTriangles(struct FTriangleID& TriangleID, struct TArray<struct FTriangleID>& OutTriangleIDs); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/MeshDescription.MeshDescriptionBase.GetPolygonVertices (Underlying native function: GetPolygonVertices 0x9994900)
	void GetPolygonVertices(struct FPolygonID& PolygonID, struct TArray<struct FVertexID>& OutVertexIDs); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/MeshDescription.MeshDescriptionBase.GetPolygonVertexInstances (Underlying native function: GetPolygonVertexInstances 0x999475c)
	void GetPolygonVertexInstances(struct FPolygonID& PolygonID, struct TArray<struct FVertexInstanceID>& OutVertexInstanceIDs); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/MeshDescription.MeshDescriptionBase.GetPolygonTriangles (Underlying native function: GetPolygonTriangles 0x9994564)
	void GetPolygonTriangles(struct FPolygonID& PolygonID, struct TArray<struct FTriangleID>& OutTriangleIDs); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/MeshDescription.MeshDescriptionBase.GetPolygonPolygonGroup (Underlying native function: GetPolygonPolygonGroup 0x9994488)
	struct FPolygonGroupID GetPolygonPolygonGroup(struct FPolygonID& PolygonID); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/MeshDescription.MeshDescriptionBase.GetPolygonPerimeterEdges (Underlying native function: GetPolygonPerimeterEdges 0x99942b8)
	void GetPolygonPerimeterEdges(struct FPolygonID& PolygonID, struct TArray<struct FEdgeID>& OutEdgeIDs); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/MeshDescription.MeshDescriptionBase.GetPolygonInternalEdges (Underlying native function: GetPolygonInternalEdges 0x99940e8)
	void GetPolygonInternalEdges(struct FPolygonID& PolygonID, struct TArray<struct FEdgeID>& OutEdgeIDs); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/MeshDescription.MeshDescriptionBase.GetPolygonGroupPolygons (Underlying native function: GetPolygonGroupPolygons 0x9993f44)
	void GetPolygonGroupPolygons(struct FPolygonGroupID& PolygonGroupID, struct TArray<struct FPolygonID>& OutPolygonIDs); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/MeshDescription.MeshDescriptionBase.GetPolygonGroupCount (Underlying native function: GetPolygonGroupCount 0x9993f18)
	int GetPolygonGroupCount(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/MeshDescription.MeshDescriptionBase.GetPolygonCount (Underlying native function: GetPolygonCount 0x9993eec)
	int GetPolygonCount(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/MeshDescription.MeshDescriptionBase.GetPolygonAdjacentPolygons (Underlying native function: GetPolygonAdjacentPolygons 0x9993d1c)
	void GetPolygonAdjacentPolygons(struct FPolygonID& PolygonID, struct TArray<struct FPolygonID>& OutPolygonIDs); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/MeshDescription.MeshDescriptionBase.GetNumVertexVertexInstances (Underlying native function: GetNumVertexVertexInstances 0x9993c54)
	int GetNumVertexVertexInstances(struct FVertexID& VertexID); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/MeshDescription.MeshDescriptionBase.GetNumVertexInstanceConnectedTriangles (Underlying native function: GetNumVertexInstanceConnectedTriangles 0x9993b8c)
	int GetNumVertexInstanceConnectedTriangles(struct FVertexInstanceID& VertexInstanceID); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/MeshDescription.MeshDescriptionBase.GetNumVertexInstanceConnectedPolygons (Underlying native function: GetNumVertexInstanceConnectedPolygons 0x9993ad0)
	int GetNumVertexInstanceConnectedPolygons(struct FVertexInstanceID& VertexInstanceID); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/MeshDescription.MeshDescriptionBase.GetNumVertexConnectedTriangles (Underlying native function: GetNumVertexConnectedTriangles 0x9993a14)
	int GetNumVertexConnectedTriangles(struct FVertexID& VertexID); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/MeshDescription.MeshDescriptionBase.GetNumVertexConnectedPolygons (Underlying native function: GetNumVertexConnectedPolygons 0x9993958)
	int GetNumVertexConnectedPolygons(struct FVertexID& VertexID); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/MeshDescription.MeshDescriptionBase.GetNumVertexConnectedEdges (Underlying native function: GetNumVertexConnectedEdges 0x9993890)
	int GetNumVertexConnectedEdges(struct FVertexID& VertexID); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/MeshDescription.MeshDescriptionBase.GetNumPolygonVertices (Underlying native function: GetNumPolygonVertices 0x99937d4)
	int GetNumPolygonVertices(struct FPolygonID& PolygonID); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/MeshDescription.MeshDescriptionBase.GetNumPolygonTriangles (Underlying native function: GetNumPolygonTriangles 0x999370c)
	int GetNumPolygonTriangles(struct FPolygonID& PolygonID); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/MeshDescription.MeshDescriptionBase.GetNumPolygonInternalEdges (Underlying native function: GetNumPolygonInternalEdges 0x9993640)
	int GetNumPolygonInternalEdges(struct FPolygonID& PolygonID); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/MeshDescription.MeshDescriptionBase.GetNumPolygonGroupPolygons (Underlying native function: GetNumPolygonGroupPolygons 0x9993578)
	int GetNumPolygonGroupPolygons(struct FPolygonGroupID& PolygonGroupID); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/MeshDescription.MeshDescriptionBase.GetNumEdgeConnectedTriangles (Underlying native function: GetNumEdgeConnectedTriangles 0x99934b0)
	int GetNumEdgeConnectedTriangles(struct FEdgeID& EdgeID); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/MeshDescription.MeshDescriptionBase.GetNumEdgeConnectedPolygons (Underlying native function: GetNumEdgeConnectedPolygons 0x9993424)
	int GetNumEdgeConnectedPolygons(struct FEdgeID& EdgeID); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/MeshDescription.MeshDescriptionBase.GetEdgeVertices (Underlying native function: GetEdgeVertices 0x9993280)
	void GetEdgeVertices(struct FEdgeID& EdgeID, struct TArray<struct FVertexID>& OutVertexIDs); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/MeshDescription.MeshDescriptionBase.GetEdgeVertex (Underlying native function: GetEdgeVertex 0x999315c)
	struct FVertexID GetEdgeVertex(struct FEdgeID& EdgeID, int& VertexNumber); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/MeshDescription.MeshDescriptionBase.GetEdgeCount (Underlying native function: GetEdgeCount 0x9993130)
	int GetEdgeCount(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/MeshDescription.MeshDescriptionBase.GetEdgeConnectedTriangles (Underlying native function: GetEdgeConnectedTriangles 0x9992f38)
	void GetEdgeConnectedTriangles(struct FEdgeID& EdgeID, struct TArray<struct FTriangleID>& OutConnectedTriangleIDs); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/MeshDescription.MeshDescriptionBase.GetEdgeConnectedPolygons (Underlying native function: GetEdgeConnectedPolygons 0x9992d68)
	void GetEdgeConnectedPolygons(struct FEdgeID& EdgeID, struct TArray<struct FPolygonID>& OutConnectedPolygonIDs); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/MeshDescription.MeshDescriptionBase.Empty (Underlying native function: Empty 0x9992d50)
	void Empty(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/MeshDescription.MeshDescriptionBase.DeleteVertexInstance (Underlying native function: DeleteVertexInstance 0x9992b80)
	void DeleteVertexInstance(struct FVertexInstanceID& VertexInstanceID, struct TArray<struct FVertexID>& OrphanedVertices); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/MeshDescription.MeshDescriptionBase.DeleteVertex (Underlying native function: DeleteVertex 0x9992ab4)
	void DeleteVertex(struct FVertexID& VertexID); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/MeshDescription.MeshDescriptionBase.DeleteTriangle (Underlying native function: DeleteTriangle 0x999269c)
	void DeleteTriangle(struct FTriangleID& TriangleID, struct TArray<struct FEdgeID>& OrphanedEdges, struct TArray<struct FVertexInstanceID>& OrphanedVertexInstances, struct TArray<struct FPolygonGroupID>& OrphanedPolygonGroupsPtr); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/MeshDescription.MeshDescriptionBase.DeletePolygonGroup (Underlying native function: DeletePolygonGroup 0x99925d0)
	void DeletePolygonGroup(struct FPolygonGroupID& PolygonGroupID); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/MeshDescription.MeshDescriptionBase.DeletePolygon (Underlying native function: DeletePolygon 0x99921b8)
	void DeletePolygon(struct FPolygonID& PolygonID, struct TArray<struct FEdgeID>& OrphanedEdges, struct TArray<struct FVertexInstanceID>& OrphanedVertexInstances, struct TArray<struct FPolygonGroupID>& OrphanedPolygonGroups); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/MeshDescription.MeshDescriptionBase.DeleteEdge (Underlying native function: DeleteEdge 0x9991fe8)
	void DeleteEdge(struct FEdgeID& EdgeID, struct TArray<struct FVertexID>& OrphanedVertices); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/MeshDescription.MeshDescriptionBase.CreateVertexWithID (Underlying native function: CreateVertexWithID 0x9991f34)
	void CreateVertexWithID(struct FVertexID& VertexID); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/MeshDescription.MeshDescriptionBase.CreateVertexInstanceWithID (Underlying native function: CreateVertexInstanceWithID 0x9991e70)
	void CreateVertexInstanceWithID(struct FVertexInstanceID& VertexInstanceID, struct FVertexID& VertexID); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/MeshDescription.MeshDescriptionBase.CreateVertexInstance (Underlying native function: CreateVertexInstance 0x9991da8)
	struct FVertexInstanceID CreateVertexInstance(struct FVertexID& VertexID); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/MeshDescription.MeshDescriptionBase.CreateVertex (Underlying native function: CreateVertex 0x9991d78)
	struct FVertexID CreateVertex(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/MeshDescription.MeshDescriptionBase.CreateTriangleWithID (Underlying native function: CreateTriangleWithID 0x9991a78)
	void CreateTriangleWithID(struct FTriangleID& TriangleID, struct FPolygonGroupID& PolygonGroupID, struct TArray<struct FVertexInstanceID>& VertexInstanceIDs, struct TArray<struct FEdgeID>& NewEdgeIDs); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/MeshDescription.MeshDescriptionBase.CreateTriangle (Underlying native function: CreateTriangle 0x99917ac)
	struct FTriangleID CreateTriangle(struct FPolygonGroupID& PolygonGroupID, struct TArray<struct FVertexInstanceID>& VertexInstanceIDs, struct TArray<struct FEdgeID>& NewEdgeIDs); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/MeshDescription.MeshDescriptionBase.CreatePolygonWithID (Underlying native function: CreatePolygonWithID 0x99914ac)
	void CreatePolygonWithID(struct FPolygonID& PolygonID, struct FPolygonGroupID& PolygonGroupID, struct TArray<struct FVertexInstanceID>& VertexInstanceIDs, struct TArray<struct FEdgeID>& NewEdgeIDs); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/MeshDescription.MeshDescriptionBase.CreatePolygonGroupWithID (Underlying native function: CreatePolygonGroupWithID 0x99913f4)
	void CreatePolygonGroupWithID(struct FPolygonGroupID& PolygonGroupID); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/MeshDescription.MeshDescriptionBase.CreatePolygonGroup (Underlying native function: CreatePolygonGroup 0x99913bc)
	struct FPolygonGroupID CreatePolygonGroup(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/MeshDescription.MeshDescriptionBase.CreatePolygon (Underlying native function: CreatePolygon 0x99910f0)
	struct FPolygonID CreatePolygon(struct FPolygonGroupID& PolygonGroupID, struct TArray<struct FVertexInstanceID>& VertexInstanceIDs, struct TArray<struct FEdgeID>& NewEdgeIDs); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/MeshDescription.MeshDescriptionBase.CreateEdgeWithID (Underlying native function: CreateEdgeWithID 0x9990ff8)
	void CreateEdgeWithID(struct FEdgeID& EdgeID, struct FVertexID& VertexID0, struct FVertexID& VertexID1); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/MeshDescription.MeshDescriptionBase.CreateEdge (Underlying native function: CreateEdge 0x9990f2c)
	struct FEdgeID CreateEdge(struct FVertexID& VertexID0, struct FVertexID& VertexID1); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/MeshDescription.MeshDescriptionBase.ComputePolygonTriangulation (Underlying native function: ComputePolygonTriangulation 0x9990e80)
	void ComputePolygonTriangulation(struct FPolygonID& PolygonID); // (Final | Native | Public | BlueprintCallable)
};

