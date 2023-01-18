// Class /Script/FortniteGame.PlaysetPreview
// Size: 0x1b0
class UPlaysetPreview : public UObjectInteractionBehavior
{
	class AStaticMeshActor* PreviewPlaysetStaticMeshActor; // 0x120 (0x8)
	class UStaticMesh* PlaysetMesh; // 0x128 (0x8)
	class UMaterial* PlaysetMaterial; // 0x130 (0x8)
	struct FPlaysetInfo PlaysetToPlace; // 0x138 (0x10)
	unsigned char padding_148[0x68]; // 0x148 (0x68)

	/* Functions */

	// Function /Script/FortniteGame.PlaysetPreview.UpdatePreviewMeshScale (Underlying native function: UpdatePreviewMeshScale 0x900f734)
	void UpdatePreviewMeshScale(); // (Final | Native | Public)

	// Function /Script/FortniteGame.PlaysetPreview.ServerSetPreviewLocation (Underlying native function: ServerSetPreviewLocation 0x901121c)
	void ServerSetPreviewLocation(struct FVector& NewPreviewLocation); // (Net | NetReliable | Native | Event | Protected | NetServer | HasDefaults | 0x80000000)

	// Function /Script/FortniteGame.PlaysetPreview.OnRep_PlaysetToPlace (Underlying native function: OnRep_PlaysetToPlace 0x900f734)
	void OnRepPlaysetToPlace(); // (Final | Native | Public)
};

