// Class /Script/FieldSystemEngine.FieldSystemComponent
// Size: 0x610
class UFieldSystemComponent : public UPrimitiveComponent
{
	class UFieldSystem* FieldSystem; // 0x540 (0x8)
	bool bIsWorldField; // 0x548 (0x1)
	bool bIsChaosField; // 0x549 (0x1)
	unsigned char unreflected_54a[0x6]; // 0x54a (0x6) 
	struct TArray<struct TWeakObjectPtr<class AChaosSolverActor>> SupportedSolvers; // 0x550 (0x10)
	struct FFieldObjectCommands ConstructionCommands; // 0x560 (0x30)
	struct FFieldObjectCommands BufferCommands; // 0x590 (0x30)
	unsigned char padding_5c0[0x50]; // 0x5c0 (0x50)

	/* Functions */

	// Function /Script/FieldSystemEngine.FieldSystemComponent.ResetFieldSystem (Underlying native function: ResetFieldSystem 0x99a3e68)
	void ResetFieldSystem(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FieldSystemEngine.FieldSystemComponent.RemovePersistentFields (Underlying native function: RemovePersistentFields 0x2782c94)
	void RemovePersistentFields(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FieldSystemEngine.FieldSystemComponent.ApplyUniformVectorFalloffForce (Underlying native function: ApplyUniformVectorFalloffForce 0x99a3cac)
	void ApplyUniformVectorFalloffForce(bool& Enabled, struct FVector& Position, struct FVector& Direction, float& Radius, float& Magnitude); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/FieldSystemEngine.FieldSystemComponent.ApplyStrainField (Underlying native function: ApplyStrainField 0x99a3b10)
	void ApplyStrainField(bool& Enabled, struct FVector& Position, float& Radius, float& Magnitude, int& Iterations); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/FieldSystemEngine.FieldSystemComponent.ApplyStayDynamicField (Underlying native function: ApplyStayDynamicField 0x99a39f0)
	void ApplyStayDynamicField(bool& Enabled, struct FVector& Position, float& Radius); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/FieldSystemEngine.FieldSystemComponent.ApplyRadialVectorFalloffForce (Underlying native function: ApplyRadialVectorFalloffForce 0x99a3890)
	void ApplyRadialVectorFalloffForce(bool& Enabled, struct FVector& Position, float& Radius, float& Magnitude); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/FieldSystemEngine.FieldSystemComponent.ApplyRadialForce (Underlying native function: ApplyRadialForce 0x99a3770)
	void ApplyRadialForce(bool& Enabled, struct FVector& Position, float& Magnitude); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/FieldSystemEngine.FieldSystemComponent.ApplyPhysicsField (Underlying native function: ApplyPhysicsField 0x99a361c)
	void ApplyPhysicsField(bool& Enabled, struct TEnumAsByte<EFieldPhysicsType>& Target, class UFieldSystemMetaData*& MetaData, class UFieldNodeBase*& Field); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FieldSystemEngine.FieldSystemComponent.ApplyLinearForce (Underlying native function: ApplyLinearForce 0x99a34fc)
	void ApplyLinearForce(bool& Enabled, struct FVector& Direction, float& Magnitude); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/FieldSystemEngine.FieldSystemComponent.AddPersistentField (Underlying native function: AddPersistentField 0x2522740)
	void AddPersistentField(bool& Enabled, struct TEnumAsByte<EFieldPhysicsType>& Target, class UFieldSystemMetaData*& MetaData, class UFieldNodeBase*& Field); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FieldSystemEngine.FieldSystemComponent.AddFieldCommand (Underlying native function: AddFieldCommand 0x99a33ac)
	void AddFieldCommand(bool& Enabled, struct TEnumAsByte<EFieldPhysicsType>& Target, class UFieldSystemMetaData*& MetaData, class UFieldNodeBase*& Field); // (Final | Native | Public | BlueprintCallable)
};

