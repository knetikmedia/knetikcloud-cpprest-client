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
 * BRERuleEngineCategoriesApi.h
 *
 * 
 */

#ifndef BRERuleEngineCategoriesApi_H_
#define BRERuleEngineCategoriesApi_H_


#include "ApiClient.h"

#include "BreCategoryResource.h"
#include "PageResource«BreCategoryResource».h"
#include "PageResource«TemplateResource».h"
#include "Result.h"
#include "TemplateResource.h"
#include <cpprest/details/basic_types.h>

namespace com {
namespace knetikcloud {
namespace client {
namespace api {

using namespace com::knetikcloud::client::model;

class  BRERuleEngineCategoriesApi
{
public:
    BRERuleEngineCategoriesApi( std::shared_ptr<ApiClient> apiClient );
    virtual ~BRERuleEngineCategoriesApi();
    /// <summary>
    /// Create a BRE category template
    /// </summary>
    /// <remarks>
    /// Templates define a type of BRE category and the properties they have
    /// </remarks>
    /// <param name="template">The category template to create (optional)</param>
    pplx::task<std::shared_ptr<TemplateResource>> createBRECategoryTemplate(std::shared_ptr<TemplateResource> template);
    /// <summary>
    /// Delete a BRE category template
    /// </summary>
    /// <remarks>
    /// If cascade &#x3D; &#39;detach&#39;, it will force delete the template even if it&#39;s attached to other objects
    /// </remarks>
    /// <param name="id">The id of the template</param>/// <param name="cascade">The value needed to delete used templates (optional)</param>
    pplx::task<void> deleteBRECategoryTemplate(utility::string_t id, utility::string_t cascade);
    /// <summary>
    /// List categories
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="size">The number of objects returned per page (optional, default to 25)</param>/// <param name="page">The number of the page returned, starting with 1 (optional, default to 1)</param>
    pplx::task<std::shared_ptr<PageResource«BreCategoryResource»>> getBRECategories(int32_t size, int32_t page);
    /// <summary>
    /// Get a single category
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="name">The category name</param>
    pplx::task<std::shared_ptr<BreCategoryResource>> getBRECategory(utility::string_t name);
    /// <summary>
    /// Get a single BRE category template
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="id">The id of the template</param>
    pplx::task<std::shared_ptr<TemplateResource>> getBRECategoryTemplate(utility::string_t id);
    /// <summary>
    /// List and search BRE category templates
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="size">The number of objects returned per page (optional, default to 25)</param>/// <param name="page">The number of the page returned, starting with 1 (optional, default to 1)</param>/// <param name="order">A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional, default to id:ASC)</param>
    pplx::task<std::shared_ptr<PageResource«TemplateResource»>> getBRECategoryTemplates(int32_t size, int32_t page, utility::string_t order);
    /// <summary>
    /// Update a category
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="name">The category name</param>/// <param name="category">The updated BRE category information (optional)</param>
    pplx::task<std::shared_ptr<BreCategoryResource>> updateBRECategory(utility::string_t name, std::shared_ptr<BreCategoryResource> category);
    /// <summary>
    /// Update a BRE category template
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="id">The id of the template</param>/// <param name="template">The updated category template definition (optional)</param>
    pplx::task<std::shared_ptr<TemplateResource>> updateBRECategoryTemplate(utility::string_t id, std::shared_ptr<TemplateResource> template);

protected:
    std::shared_ptr<ApiClient> m_ApiClient;
};

}
}
}
}

#endif /* BRERuleEngineCategoriesApi_H_ */

