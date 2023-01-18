// Class /Script/UIFramework.UIFrameworkPlayerComponent
// Size: 0x4c0
class UUIFrameworkPlayerComponent : public UActorComponent
{
	unsigned char unreflected_a0[0x8]; // 0xa0 (0x8) 
	struct FUIFrameworkGameLayerSlotList RootList; // 0xa8 (0x120)
	struct FUIFrameworkWidgetTree WidgetTree; // 0x1c8 (0x1f8)
	class UUIFrameworkPresenter* Presenter; // 0x3c0 (0x8)
	struct TSet<int> NetReplicationPending; // 0x3c8 (0x50)
	struct TSet<int> AddPending; // 0x418 (0x50)
	unsigned char padding_468[0x58]; // 0x468 (0x58)

	/* Functions */

	// Function /Script/UIFramework.UIFrameworkPlayerComponent.ServerRemoveWidgetRootFromTree (Underlying native function: ServerRemoveWidgetRootFromTree 0x52efae0)
	void ServerRemoveWidgetRootFromTree(struct FUIFrameworkWidgetId*& WidgetId); // (Final | Net | NetReliable | Native | Event | Private | NetServer)

	// Function /Script/UIFramework.UIFrameworkPlayerComponent.RemoveWidget (Underlying native function: RemoveWidget 0x70c5928)
	void RemoveWidget(class UUIFrameworkWidget*& Widget); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/UIFramework.UIFrameworkPlayerComponent.AddWidget (Underlying native function: AddWidget 0x70c5418)
	void AddWidget(struct FUIFrameworkGameLayerSlot& Widget); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)
};

