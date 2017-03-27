/**
 * Knetik Platform API Documentation latest 
 * This is the spec for the Knetik API.  Use this in conjunction with the documentation found at https://knetikcloud.com
 *
 * OpenAPI spec version: latest 
 * Contact: support@knetik.com
 *
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */

/*
 * SubscriptionPlanResource.h
 *
 * 
 */

#ifndef SubscriptionPlanResource_H_
#define SubscriptionPlanResource_H_


#include "ModelBase.h"

#include <cpprest/details/basic_types.h>
#include <map>
#include <vector>
#include "Property.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  SubscriptionPlanResource
    : public ModelBase
{
public:
    SubscriptionPlanResource();
    virtual ~SubscriptionPlanResource();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// SubscriptionPlanResource members

    /// <summary>
    /// A map of additional properties, keyed on the property name.  Must match the names and types defined in the template for this subscription
    /// </summary>
    std::map<utility::string_t, std::shared_ptr<Property>>& getAdditionalProperties();
    bool additional_propertiesIsSet() const;
    void unsetAdditional_properties();
    /// <summary>
    /// The length of the billing cycle in number of billing cycle unit
    /// </summary>
    int32_t getBillingCycleLength() const;
    void setBillingCycleLength(int32_t value);
        /// <summary>
    /// The time period unit to apply to the length of billing cycles
    /// </summary>
    utility::string_t getBillingCycleUnit() const;
    void setBillingCycleUnit(utility::string_t value);
        /// <summary>
    /// Whether this plan will be renewed on the consolidated billing cycle
    /// </summary>
    bool getConsolidated() const;
    void setConsolidated(bool value);
        /// <summary>
    /// The ISO3 currency code to use for the fees
    /// </summary>
    utility::string_t getCurrencyCode() const;
    void setCurrencyCode(utility::string_t value);
        /// <summary>
    /// Used to schedule plan availability end date
    /// </summary>
    int64_t getEndDate() const;
    void setEndDate(int64_t value);
    bool end_dateIsSet() const;
    void unsetEnd_date();
    /// <summary>
    /// Optional override for the length of the first billing cycle before the first recurring billing
    /// </summary>
    int32_t getFirstBillingCycleLength() const;
    void setFirstBillingCycleLength(int32_t value);
    bool first_billing_cycle_lengthIsSet() const;
    void unsetFirst_billing_cycle_length();
    /// <summary>
    /// The time period unit to apply to the length of the first billing cycle. Required when first_billing_cycle_length is specified
    /// </summary>
    utility::string_t getFirstBillingCycleUnit() const;
    void setFirstBillingCycleUnit(utility::string_t value);
    bool first_billing_cycle_unitIsSet() const;
    void unsetFirst_billing_cycle_unit();
    /// <summary>
    /// The number of late payment days before a subscription is canceled
    /// </summary>
    int32_t getGracePeriod() const;
    void setGracePeriod(int32_t value);
        /// <summary>
    /// The id of the plan used to generate the SKUs
    /// </summary>
    utility::string_t getId() const;
    void setId(utility::string_t value);
    bool idIsSet() const;
    void unsetId();
    /// <summary>
    /// The fee charged when the subscription is purchased
    /// </summary>
    double getInitialFee() const;
    void setInitialFee(double value);
        /// <summary>
    /// The SKU to be used when purchasing the subscription through the cart
    /// </summary>
    utility::string_t getInitialSku() const;
    void setInitialSku(utility::string_t value);
    bool initial_skuIsSet() const;
    void unsetInitial_sku();
    /// <summary>
    /// The fee to add to the bill when an invoice has gone unpaid passed the grace period
    /// </summary>
    double getLatePaymentFee() const;
    void setLatePaymentFee(double value);
        /// <summary>
    /// The SKU that will show on the invoice when the subscription is delinquent
    /// </summary>
    utility::string_t getLatePaymentSku() const;
    void setLatePaymentSku(utility::string_t value);
    bool late_payment_skuIsSet() const;
    void unsetLate_payment_sku();
    /// <summary>
    /// Whether this plan is locked because it has been purchased by at least one user.  When locked, a number of properties can no longer be changed
    /// </summary>
    bool getLocked() const;
    void setLocked(bool value);
    bool lockedIsSet() const;
    void unsetLocked();
    /// <summary>
    /// The number of charge attempts before the subscription becomes delinquent
    /// </summary>
    int32_t getMaxBillAttempts() const;
    void setMaxBillAttempts(int32_t value);
        /// <summary>
    /// Maximum number of renewals. If a migration plan is provided, the subscription will automatically switch to it when this limit is reached
    /// </summary>
    int32_t getMaxCycles() const;
    void setMaxCycles(int32_t value);
    bool max_cyclesIsSet() const;
    void unsetMax_cycles();
    /// <summary>
    /// Automatically migrate to the specified plan when the subscription is first renewed
    /// </summary>
    utility::string_t getMigrateToPlan() const;
    void setMigrateToPlan(utility::string_t value);
    bool migrate_to_planIsSet() const;
    void unsetMigrate_to_plan();
    /// <summary>
    /// The minimum number of renewals to charge for
    /// </summary>
    int32_t getMinCycles() const;
    void setMinCycles(int32_t value);
    bool min_cyclesIsSet() const;
    void unsetMin_cycles();
    /// <summary>
    /// The name of the plan used to generate the SKUs
    /// </summary>
    utility::string_t getName() const;
    void setName(utility::string_t value);
        /// <summary>
    /// Whether this plan is currently available
    /// </summary>
    bool getPublished() const;
    void setPublished(bool value);
        /// <summary>
    /// The fee to charge when a suspended subscription is to be re-activated
    /// </summary>
    double getReactivationFee() const;
    void setReactivationFee(double value);
        /// <summary>
    /// The SKU that will show on the invoice when the subscription is re-activated after a suspension
    /// </summary>
    utility::string_t getReactivationSku() const;
    void setReactivationSku(utility::string_t value);
    bool reactivation_skuIsSet() const;
    void unsetReactivation_sku();
    /// <summary>
    /// The recurring fee to charge for each renewal
    /// </summary>
    double getRecurringFee() const;
    void setRecurringFee(double value);
        /// <summary>
    /// The SKU that will show on the invoice when the subscription is activated
    /// </summary>
    utility::string_t getRecurringSku() const;
    void setRecurringSku(utility::string_t value);
    bool recurring_skuIsSet() const;
    void unsetRecurring_sku();
    /// <summary>
    /// Used to schedule plan availability start date
    /// </summary>
    int64_t getStartDate() const;
    void setStartDate(int64_t value);
    bool start_dateIsSet() const;
    void unsetStart_date();

protected:
    std::map<utility::string_t, std::shared_ptr<Property>> m_Additional_properties;
    bool m_Additional_propertiesIsSet;
int32_t m_Billing_cycle_length;
    utility::string_t m_Billing_cycle_unit;
    bool m_Consolidated;
    utility::string_t m_Currency_code;
    int64_t m_End_date;
    bool m_End_dateIsSet;
int32_t m_First_billing_cycle_length;
    bool m_First_billing_cycle_lengthIsSet;
utility::string_t m_First_billing_cycle_unit;
    bool m_First_billing_cycle_unitIsSet;
int32_t m_Grace_period;
    utility::string_t m_Id;
    bool m_IdIsSet;
double m_Initial_fee;
    utility::string_t m_Initial_sku;
    bool m_Initial_skuIsSet;
double m_Late_payment_fee;
    utility::string_t m_Late_payment_sku;
    bool m_Late_payment_skuIsSet;
bool m_Locked;
    bool m_LockedIsSet;
int32_t m_Max_bill_attempts;
    int32_t m_Max_cycles;
    bool m_Max_cyclesIsSet;
utility::string_t m_Migrate_to_plan;
    bool m_Migrate_to_planIsSet;
int32_t m_Min_cycles;
    bool m_Min_cyclesIsSet;
utility::string_t m_Name;
    bool m_Published;
    double m_Reactivation_fee;
    utility::string_t m_Reactivation_sku;
    bool m_Reactivation_skuIsSet;
double m_Recurring_fee;
    utility::string_t m_Recurring_sku;
    bool m_Recurring_skuIsSet;
int64_t m_Start_date;
    bool m_Start_dateIsSet;
};

}
}
}
}

#endif /* SubscriptionPlanResource_H_ */
