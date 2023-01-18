// Class /Script/MRMesh.MeshReconstructorBase
// Size: 0x28
class UMeshReconstructorBase : public UObject
{

	/* Functions */

	// Function /Script/MRMesh.MeshReconstructorBase.StopReconstruction (Underlying native function: StopReconstruction 0x735d960)
	void StopReconstruction(); // (Native | Public | BlueprintCallable)

	// Function /Script/MRMesh.MeshReconstructorBase.StartReconstruction (Underlying native function: StartReconstruction 0x145ca48)
	void StartReconstruction(); // (Native | Public | BlueprintCallable)

	// Function /Script/MRMesh.MeshReconstructorBase.PauseReconstruction (Underlying native function: PauseReconstruction 0xfb0c9c)
	void PauseReconstruction(); // (Native | Public | BlueprintCallable)

	// Function /Script/MRMesh.MeshReconstructorBase.IsReconstructionStarted (Underlying native function: IsReconstructionStarted 0x18f39fc)
	bool IsReconstructionStarted(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/MRMesh.MeshReconstructorBase.IsReconstructionPaused (Underlying native function: IsReconstructionPaused 0x720202c)
	bool IsReconstructionPaused(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/MRMesh.MeshReconstructorBase.DisconnectMRMesh (Underlying native function: DisconnectMRMesh 0x134bfb4)
	void DisconnectMRMesh(); // (Native | Public)

	// Function /Script/MRMesh.MeshReconstructorBase.ConnectMRMesh (Underlying native function: ConnectMRMesh 0x979e9a4)
	void ConnectMRMesh(class UMRMeshComponent*& Mesh); // (Native | Public)
};

