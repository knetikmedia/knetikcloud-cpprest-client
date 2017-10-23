/**
 * Knetik Platform API Documentation latest 
 * This is the spec for the Knetik API.  Use this in conjunction with the documentation found at https://knetikcloud.com.
 *
 * OpenAPI spec version: latest 
 * Contact: support@knetik.com
 *
 * NOTE: This class is auto generated by the swagger code generator 2.3.0-SNAPSHOT.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */

/*
 * BRERuleEngineRulesApi.h
 *
 * 
 */

#ifndef BRERuleEngineRulesApi_H_
#define BRERuleEngineRulesApi_H_


#include "ApiClient.h"

#include "BooleanResource.h"
#include "BreRule.h"
#include "Expression«object».h"
#include "PageResource«BreRule».h"
#include "Result.h"
#include <cpprest/details/basic_types.h>

namespace com {
namespace knetikcloud {
namespace client {
namespace api {

using namespace com::knetikcloud::client::model;

class  BRERuleEngineRulesApi
{
public:
    BRERuleEngineRulesApi( std::shared_ptr<ApiClient> apiClient );
    virtual ~BRERuleEngineRulesApi();
    /// <summary>
    /// Create a rule
    /// </summary>
    /// <remarks>
    /// Rules define which actions to run when a given event verifies the specified condition. Full list of predicates and other type of expressions can be found at GET /bre/expressions/
    /// </remarks>
    /// <param name="breRule">The BRE rule object (optional)</param>
    pplx::task<std::shared_ptr<BreRule>> createBRERule(std::shared_ptr<BreRule> breRule);
    /// <summary>
    /// Delete a rule
    /// </summary>
    /// <remarks>
    /// May fail if there are existing rules against it. Cannot delete core rules
    /// </remarks>
    /// <param name="id">The id of the rule</param>
    pplx::task<void> deleteBRERule(utility::string_t id);
    /// <summary>
    /// Returns a string representation of the provided expression
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="expression">The expression (optional)</param>
    pplx::task<utility::string_t> getBREExpressionAsString(std::shared_ptr<Expression«object»> expression);
    /// <summary>
    /// Get a single rule
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="id">The id of the rule</param>
    pplx::task<std::shared_ptr<BreRule>> getBRERule(utility::string_t id);
    /// <summary>
    /// List rules
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="filterName">Filter for rules containing the given name (optional)</param>/// <param name="filterEnabled">Filter for rules by active status, null for both (optional, default to null)</param>/// <param name="filterSystem">Filter for rules that are system rules when true, or not when false. Leave off for both mixed (optional)</param>/// <param name="filterTrigger">Filter for rules that are for the trigger with the given name (optional)</param>/// <param name="filterAction">Filter for rules that use the action with the given name (optional)</param>/// <param name="filterCondition">Filter for rules that have a condition containing the given string (optional)</param>/// <param name="size">The number of objects returned per page (optional, default to 25)</param>/// <param name="page">The number of the page returned, starting with 1 (optional, default to 1)</param>
    pplx::task<std::shared_ptr<PageResource«BreRule»>> getBRERules(utility::string_t filterName, bool filterEnabled, bool filterSystem, utility::string_t filterTrigger, utility::string_t filterAction, utility::string_t filterCondition, int32_t size, int32_t page);
    /// <summary>
    /// Enable or disable a rule
    /// </summary>
    /// <remarks>
    /// This is helpful for turning off systems rules which cannot be deleted or modified otherwise
    /// </remarks>
    /// <param name="id">The id of the rule</param>/// <param name="enabled">The boolean value (optional)</param>
    pplx::task<void> setBRERule(utility::string_t id, std::shared_ptr<BooleanResource> enabled);
    /// <summary>
    /// Update a rule
    /// </summary>
    /// <remarks>
    /// Cannot update system rules
    /// </remarks>
    /// <param name="id">The id of the rule</param>/// <param name="breRule">The BRE rule object (optional)</param>
    pplx::task<std::shared_ptr<BreRule>> updateBRERule(utility::string_t id, std::shared_ptr<BreRule> breRule);

protected:
    std::shared_ptr<ApiClient> m_ApiClient;
};

}
}
}
}

#endif /* BRERuleEngineRulesApi_H_ */

