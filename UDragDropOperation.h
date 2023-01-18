// Class /Script/UMG.DragDropOperation
// Size: 0x90
class UDragDropOperation : public UObject
{
	struct FString tag; // 0x28 (0x10)
	class UObject* Payload; // 0x38 (0x8)
	class UWidget* DefaultDragVisual; // 0x40 (0x8)
	enum EDragPivot Pivot; // 0x48 (0x1)
	unsigned char unreflected_49[0x7]; // 0x49 (0x7) 
	struct FVector2D Offset; // 0x50 (0x10)
	struct FMulticastInlineDelegate OnDrop; // 0x60 (0x10)
	struct FMulticastInlineDelegate OnDragCancelled; // 0x70 (0x10)
	struct FMulticastInlineDelegate OnDragged; // 0x80 (0x10)

	/* Functions */

	// Function /Script/UMG.DragDropOperation.Drop (Underlying native function: Drop 0x9b207b0)
	void Drop(struct FPointerEvent& PointerEvent); // (Native | Event | Public | HasOutParms | BlueprintEvent)

	// Function /Script/UMG.DragDropOperation.Dragged (Underlying native function: Dragged 0x9b1f70c)
	void Dragged(struct FPointerEvent& PointerEvent); // (Native | Event | Public | HasOutParms | BlueprintEvent)

	// Function /Script/UMG.DragDropOperation.DragCancelled (Underlying native function: DragCancelled 0x9b1f640)
	void DragCancelled(struct FPointerEvent& PointerEvent); // (Native | Event | Public | HasOutParms | BlueprintEvent)
};

