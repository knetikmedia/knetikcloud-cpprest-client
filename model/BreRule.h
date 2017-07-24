/**
 * Knetik Platform API Documentation latest 
 * This is the spec for the Knetik API.  Use this in conjunction with the documentation found at https://knetikcloud.com.
 *
 * OpenAPI spec version: latest 
 * Contact: support@knetik.com
 *
 * NOTE: This class is auto generated by the swagger code generator 2.2.3.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */

/*
 * BreRule.h
 *
 * 
 */

#ifndef BreRule_H_
#define BreRule_H_


#include "ModelBase.h"

#include "PredicateOperation.h"
#include "ActionResource.h"
#include <cpprest/details/basic_types.h>

namespace com {
namespace knetikcloud {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  BreRule
    : public ModelBase
{
public:
    BreRule();
    virtual ~BreRule();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// BreRule members

    /// <summary>
    /// A list of actions to execute, and the mapping for their parameters, when the rule runs. Minimum 1
    /// </summary>
    std::shared_ptr<ActionResource> getActions() const;
        void setActions(std::shared_ptr<ActionResource> value);
    /// <summary>
    /// A condition expression that must be met in a given event for the rule to run. Empty to always run
    /// </summary>
    std::shared_ptr<PredicateOperation> getCondition() const;
    bool conditionIsSet() const;
    void unsetCondition();
    void setCondition(std::shared_ptr<PredicateOperation> value);
    /// <summary>
    /// The condition as a readable string. Filled in by the system from the condition
    /// </summary>
    utility::string_t getConditionText() const;
    bool conditionTextIsSet() const;
    void unsetCondition_text();
    void setConditionText(utility::string_t value);
    /// <summary>
    /// The human readable description of the rule
    /// </summary>
    utility::string_t getDescription() const;
    bool descriptionIsSet() const;
    void unsetDescription();
    void setDescription(utility::string_t value);
    /// <summary>
    /// Whether the rule is enabled to run (in conjunction with dates). Default true
    /// </summary>
    bool getEnabled() const;
    bool enabledIsSet() const;
    void unsetEnabled();
    void setEnabled(bool value);
    /// <summary>
    /// The date the rule ceases to take effect, or null if never. Unix timestamp in seconds
    /// </summary>
    int64_t getEndDate() const;
    bool endDateIsSet() const;
    void unsetEnd_date();
    void setEndDate(int64_t value);
    /// <summary>
    /// The event name of the trigger this rule runs for. Affects which parameters are available
    /// </summary>
    utility::string_t getEventName() const;
        void setEventName(utility::string_t value);
    /// <summary>
    /// The id of the rule for later references. If left null a random guid will be generated. Must be unique. Cannot be changed
    /// </summary>
    utility::string_t getId() const;
    bool idIsSet() const;
    void unsetId();
    void setId(utility::string_t value);
    /// <summary>
    /// The human readable name of the rule
    /// </summary>
    utility::string_t getName() const;
        void setName(utility::string_t value);
    /// <summary>
    /// Used to sort rules to control the order they run in. Larger numbered sort values run first.  Default 500
    /// </summary>
    int32_t getSort() const;
    bool sortIsSet() const;
    void unsetSort();
    void setSort(int32_t value);
    /// <summary>
    /// The date the rule begins to take effect, or null if always. Unix timestamp in seconds
    /// </summary>
    int64_t getStartDate() const;
    bool startDateIsSet() const;
    void unsetStart_date();
    void setStartDate(int64_t value);
    /// <summary>
    /// Whether the rule is a default part of the system. System rules cannot be edited or deleted, but may be disabled
    /// </summary>
    bool getSystemRule() const;
    bool systemRuleIsSet() const;
    void unsetSystem_rule();
    void setSystemRule(bool value);

protected:
    std::shared_ptr<ActionResource> m_Actions;
        std::shared_ptr<PredicateOperation> m_Condition;
    bool m_ConditionIsSet;
    utility::string_t m_Condition_text;
    bool m_Condition_textIsSet;
    utility::string_t m_Description;
    bool m_DescriptionIsSet;
    bool m_Enabled;
    bool m_EnabledIsSet;
    int64_t m_End_date;
    bool m_End_dateIsSet;
    utility::string_t m_Event_name;
        utility::string_t m_Id;
    bool m_IdIsSet;
    utility::string_t m_Name;
        int32_t m_Sort;
    bool m_SortIsSet;
    int64_t m_Start_date;
    bool m_Start_dateIsSet;
    bool m_System_rule;
    bool m_System_ruleIsSet;
};

}
}
}
}

#endif /* BreRule_H_ */
