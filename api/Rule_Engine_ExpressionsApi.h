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
 * Rule_Engine_ExpressionsApi.h
 *
 * 
 */

#ifndef Rule_Engine_ExpressionsApi_H_
#define Rule_Engine_ExpressionsApi_H_


#include "ApiClient.h"

#include "ExpressionResource.h"
#include "Result.h"
#include "StringWrapper.h"
#include <cpprest/details/basic_types.h>

namespace com {
namespace knetikcloud {
namespace client {
namespace api {

using namespace com::knetikcloud::client::model;

class  Rule_Engine_ExpressionsApi
{
public:
    Rule_Engine_ExpressionsApi( std::shared_ptr<ApiClient> apiClient );
    virtual ~Rule_Engine_ExpressionsApi();
    /// <summary>
    /// Lookup a specific expression
    /// </summary>
    /// <remarks>
    /// &lt;b&gt;Permissions Needed:&lt;/b&gt; BRE_RULE_ENGINE_EXPRESSIONS_USER
    /// </remarks>
    /// <param name="type">Specifiy the type of expression as returned by the listing endpoint</param>
    pplx::task<std::shared_ptr<ExpressionResource>> getBREExpression(utility::string_t type);
    /// <summary>
    /// Get a list of supported expressions to use in conditions or actions.
    /// </summary>
    /// <remarks>
    /// Each resource contains a type and a definition that are read-only, all the other fields must be provided when using the expression in a rule. &lt;br&gt;&lt;br&gt;&lt;b&gt;Permissions Needed:&lt;/b&gt; BRE_RULE_ENGINE_EXPRESSIONS_USER
    /// </remarks>
    /// <param name="filterTypeGroup">Filter for expressions by type group (optional)</param>
    pplx::task<std::vector<std::shared_ptr<ExpressionResource>>> getBREExpressions(utility::string_t filterTypeGroup);
    /// <summary>
    /// Returns the textual representation of an expression
    /// </summary>
    /// <remarks>
    /// &lt;b&gt;Permissions Needed:&lt;/b&gt; BRE_RULE_ENGINE_EXPRESSIONS_USER
    /// </remarks>
    /// <param name="expression">The expression resource to be converted (optional)</param>
    pplx::task<std::shared_ptr<StringWrapper>> getExpressionAsText(std::shared_ptr<ExpressionResource> expression);

protected:
    std::shared_ptr<ApiClient> m_ApiClient;
};

}
}
}
}

#endif /* Rule_Engine_ExpressionsApi_H_ */

