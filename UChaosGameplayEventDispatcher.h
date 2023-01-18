// Class /Script/ChaosSolverEngine.ChaosGameplayEventDispatcher
// Size: 0x308
class UChaosGameplayEventDispatcher : public UChaosEventListenerComponent
{
	unsigned char unreflected_a8[0x110]; // 0xa8 (0x110) 
	struct TMap<class UPrimitiveComponent*, struct FChaosHandlerSet> CollisionEventRegistrations; // 0x1b8 (0x50)
	struct TMap<class UPrimitiveComponent*, struct FBreakEventCallbackWrapper> BreakEventRegistrations; // 0x208 (0x50)
	struct TMap<class UPrimitiveComponent*, struct FRemovalEventCallbackWrapper> RemovalEventRegistrations; // 0x258 (0x50)
	struct TMap<class UPrimitiveComponent*, struct FCrumblingEventCallbackWrapper> CrumblingEventRegistrations; // 0x2a8 (0x50)
	unsigned char padding_2f8[0x10]; // 0x2f8 (0x10)
};

