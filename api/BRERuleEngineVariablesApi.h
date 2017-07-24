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
 * BRERuleEngineVariablesApi.h
 *
 * 
 */

#ifndef BRERuleEngineVariablesApi_H_
#define BRERuleEngineVariablesApi_H_


#include "ApiClient.h"

#include "PageResource«SimpleReferenceResource«object»».h"
#include "Result.h"
#include "VariableTypeResource.h"
#include <cpprest/details/basic_types.h>

namespace com {
namespace knetikcloud {
namespace client {
namespace api {

using namespace com::knetikcloud::client::model;

class  BRERuleEngineVariablesApi
{
public:
    BRERuleEngineVariablesApi( std::shared_ptr<ApiClient> apiClient );
    virtual ~BRERuleEngineVariablesApi();
    /// <summary>
    /// Get a list of variable types available
    /// </summary>
    /// <remarks>
    /// Types include integer, string, user and invoice. These are used to qualify trigger parameters and action variables with strong typing.
    /// </remarks>
    
    pplx::task<std::vector<std::shared_ptr<VariableTypeResource>>> getBREVariableTypes();
    /// <summary>
    /// List valid values for a type
    /// </summary>
    /// <remarks>
    /// Used to lookup users to fill in a user constant for example. Only types marked as enumerable are suppoorted here.
    /// </remarks>
    /// <param name="name">The name of the type</param>/// <param name="filterName">Filter results by those with names starting with this string (optional)</param>/// <param name="size">The number of objects returned per page (optional, default to 25)</param>/// <param name="page">The number of the page returned, starting with 1 (optional, default to 1)</param>
    pplx::task<std::shared_ptr<PageResource«SimpleReferenceResource«object»»>> getBREVariableValues(utility::string_t name, utility::string_t filterName, int32_t size, int32_t page);

protected:
    std::shared_ptr<ApiClient> m_ApiClient;
};

}
}
}
}

#endif /* BRERuleEngineVariablesApi_H_ */

