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
    /// Rules define which actions to run when a given event verifies the specified conditions. Conditions and actions are defined by binding event or context parameters to arguments. Conditions also known as Predicates are logical expressions that result in a boolean. Operators are used to describe rules between arguments to form that condition. There are 3 families of operators: Boolean, Math and String. Math and String operators are functions that transform arguments into numbers or strings...&lt;h1&gt;Boolean Operators&lt;/h1&gt;&lt;br /&gt;&lt;br /&gt;1 arg:&lt;br /&gt;&#x3D;&#x3D;&#x3D;&#x3D;&#x3D;&#x3D;&lt;br /&gt;&lt;br /&gt;&lt;ul&gt; &lt;li&gt;IS_NULL&lt;/li&gt; &lt;li&gt;IS_NOT_NULL&lt;/li&gt; &lt;li&gt;STRING_IS_EMPTY&lt;/li&gt; &lt;li&gt;NOT &lt;/li&gt; &lt;li&gt;MAP_IS_EMPTY&lt;/li&gt;&lt;/ul&gt;&lt;br /&gt;2 args:&lt;br /&gt;&#x3D;&#x3D;&#x3D;&#x3D;&#x3D;&#x3D;&#x3D;&lt;br /&gt;&lt;br /&gt;&lt;ul&gt; &lt;li&gt;EQ&lt;/li&gt; &lt;li&gt;NE (Not Equals)&lt;/li&gt; &lt;li&gt;GT (Greater Than)&lt;/li&gt; &lt;li&gt;GOE (Greater Or Equals)&lt;/li&gt; &lt;li&gt;LT (Lesser Than)&lt;/li&gt; &lt;li&gt;LOE (Lesser Or Equals)&lt;/li&gt; &lt;li&gt;OR&lt;/li&gt; &lt;li&gt;AND&lt;/li&gt; &lt;li&gt;XNOR&lt;/li&gt; &lt;li&gt;XOR&lt;/li&gt; &lt;li&gt;CONTAINS_KEY (for maps only)&lt;/li&gt; &lt;li&gt;CONTAINS_VALUE (for maps only)&lt;/li&gt; &lt;li&gt;MATCHES (regex)&lt;/li&gt; &lt;li&gt;MATCHES_IC (regex ignore case)&lt;/li&gt; &lt;li&gt;STARTS_WITH&lt;/li&gt; &lt;li&gt;STARTS_WITH_IC&lt;/li&gt; &lt;li&gt;EQ_IGNORE_CASE&lt;/li&gt; &lt;li&gt;ENDS_WITH&lt;/li&gt; &lt;li&gt;ENDS_WITH_IC&lt;/li&gt; &lt;li&gt;STRING_CONTAINS&lt;/li&gt; &lt;li&gt;STRING_CONTAINS_IC&lt;/li&gt; &lt;li&gt;LIKE (SQL like)&lt;/li&gt;&lt;/ul&gt;&lt;br /&gt;3 args exceptions:&lt;br /&gt;&#x3D;&#x3D;&#x3D;&#x3D;&#x3D;&#x3D;&#x3D;&#x3D;&#x3D;&#x3D;&#x3D;&#x3D;&#x3D;&#x3D;&#x3D;&#x3D;&#x3D;&lt;br /&gt;&lt;br /&gt;&lt;ul&gt; &lt;li&gt;BETWEEN&lt;/li&gt;&lt;/ul&gt;&lt;br /&gt;n args:&lt;br /&gt;&#x3D;&#x3D;&#x3D;&#x3D;&#x3D;&#x3D;&#x3D;&lt;br /&gt;&lt;br /&gt;&lt;ul&gt; &lt;li&gt;IN&lt;/li&gt; &lt;li&gt;NOT_INT&lt;/li&gt;&lt;/ul&gt;&lt;h1&gt;Math Operators&lt;/h1&gt;1 arg:&lt;br /&gt;&#x3D;&#x3D;&#x3D;&#x3D;&#x3D;&lt;br /&gt;&lt;br /&gt;&lt;ul&gt; &lt;li&gt;NEGATE&lt;/li&gt; &lt;li&gt;MAP_SIZE&lt;/li&gt; &lt;li&gt;STRING_LENGTH&lt;/li&gt; &lt;li&gt;CEIL&lt;/li&gt; &lt;li&gt;ABS&lt;/li&gt; &lt;li&gt;FLOOR&lt;/li&gt; &lt;li&gt;ROUND&lt;/li&gt; &lt;li&gt;RANDOM (no arg)&lt;/li&gt; &lt;li&gt;RANDOM2 (seed arg)&lt;/li&gt; &lt;li&gt;NUMCAST&lt;/li&gt; &lt;li&gt;HOUR&lt;/li&gt; &lt;li&gt;MINUTE&lt;/li&gt; &lt;li&gt;SECOND&lt;/li&gt; &lt;li&gt;MILLISECOND&lt;/li&gt; &lt;li&gt;YEAR&lt;/li&gt; &lt;li&gt;WEEK&lt;/li&gt; &lt;li&gt;YEAR_MONTH&lt;/li&gt; &lt;li&gt;YEAR_WEEK&lt;/li&gt; &lt;li&gt;DAY_OF_WEEK&lt;/li&gt; &lt;li&gt;DAY_OF_MONTH&lt;/li&gt; &lt;li&gt;DAY_OF_YEAR&lt;/li&gt; &lt;li&gt;WEEK&lt;/li&gt; &lt;li&gt;WEEK&lt;/li&gt; &lt;li&gt;WEEK&lt;/li&gt;&lt;/ul&gt;&lt;br /&gt;&lt;br /&gt;2 args:&lt;br /&gt;&#x3D;&#x3D;&#x3D;&#x3D;&#x3D;&#x3D;&lt;br /&gt;&lt;br /&gt;&lt;ul&gt; &lt;li&gt;ADD&lt;/li&gt; &lt;li&gt;DIV&lt;/li&gt; &lt;li&gt;MULT&lt;/li&gt; &lt;li&gt;SUB&lt;/li&gt; &lt;li&gt;POWER&lt;/li&gt; &lt;li&gt;MOD&lt;/li&gt; &lt;li&gt;LOCATE (index of (string, char))&lt;/li&gt; &lt;li&gt;DIFF_YEARS&lt;/li&gt; &lt;li&gt;DIFF_MONTHS&lt;/li&gt; &lt;li&gt;DIFF_WEEKS&lt;/li&gt; &lt;li&gt;DIFF_DAYS&lt;/li&gt; &lt;li&gt;DIFF_HOURS&lt;/li&gt; &lt;li&gt;DIFF_MINUTES&lt;/li&gt; &lt;li&gt;DIFF_SECONDS&lt;/li&gt;&lt;/ul&gt;&lt;br /&gt;&lt;br /&gt;2 args:&lt;br /&gt;&#x3D;&#x3D;&#x3D;&#x3D;&#x3D;&#x3D;&lt;br /&gt;&lt;br /&gt;&lt;ul&gt; &lt;li&gt;MIN&lt;/li&gt; &lt;li&gt;MAX&lt;/li&gt;&lt;/ul&gt;&lt;h1&gt;String Operators&lt;/h1&gt;0 arg:&lt;br /&gt;&#x3D;&#x3D;&#x3D;&#x3D;&#x3D;&lt;br /&gt;&lt;br /&gt;&lt;ul&gt; &lt;li&gt;CURRENT_TIME&lt;/li&gt;&lt;/ul&gt;&lt;br /&gt;&lt;br /&gt;1 arg:&lt;br /&gt;&#x3D;&#x3D;&#x3D;&#x3D;&#x3D;&lt;br /&gt;&lt;br /&gt;&lt;ul&gt; &lt;li&gt;CURRENT_TIME&lt;/li&gt; &lt;li&gt;LOWER&lt;/li&gt; &lt;li&gt;UPPER&lt;/li&gt; &lt;li&gt;TRIM&lt;/li&gt; &lt;li&gt;STRING_CAST&lt;/li&gt;&lt;/ul&gt;&lt;br /&gt;&lt;br /&gt;2 args:&lt;br /&gt;&#x3D;&#x3D;&#x3D;&#x3D;&#x3D;&lt;br /&gt;&lt;br /&gt;&lt;ul&gt; &lt;li&gt;CHAR_AT&lt;/li&gt; &lt;li&gt;SUBSTR_1ARG (substr(string, start))&lt;/li&gt; &lt;li&gt;CONCAT&lt;/li&gt; &lt;li&gt;TRIM&lt;/li&gt; &lt;li&gt;STRING_CAST&lt;/li&gt;&lt;/ul&gt;&lt;br /&gt;&lt;br /&gt;3 args:&lt;br /&gt;&#x3D;&#x3D;&#x3D;&#x3D;&#x3D;&lt;br /&gt;&lt;br /&gt;&lt;ul&gt; &lt;li&gt;SUBSTR_2ARGS (substr(string, start, length))&lt;/li&gt;&lt;/ul&gt;
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

