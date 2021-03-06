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
 * CategoriesApi.h
 *
 * 
 */

#ifndef CategoriesApi_H_
#define CategoriesApi_H_


#include "ApiClient.h"

#include "CategoryResource.h"
#include "PageResource«CategoryResource».h"
#include "PageResource«TemplateResource».h"
#include "PageResource«string».h"
#include "Result.h"
#include "TemplateResource.h"
#include <cpprest/details/basic_types.h>

namespace com {
namespace knetikcloud {
namespace client {
namespace api {

using namespace com::knetikcloud::client::model;

class  CategoriesApi
{
public:
    CategoriesApi( std::shared_ptr<ApiClient> apiClient );
    virtual ~CategoriesApi();
    /// <summary>
    /// Create a new category
    /// </summary>
    /// <remarks>
    /// &lt;b&gt;Permissions Needed:&lt;/b&gt; CATEGORIES_ADMIN
    /// </remarks>
    /// <param name="category">The category to create (optional)</param>
    pplx::task<std::shared_ptr<CategoryResource>> createCategory(std::shared_ptr<CategoryResource> category);
    /// <summary>
    /// Create a category template
    /// </summary>
    /// <remarks>
    /// Templates define a type of category and the properties they have. &lt;br&gt;&lt;br&gt;&lt;b&gt;Permissions Needed:&lt;/b&gt; TEMPLATE_ADMIN
    /// </remarks>
    /// <param name="template">The template to create (optional)</param>
    pplx::task<std::shared_ptr<TemplateResource>> createCategoryTemplate(std::shared_ptr<TemplateResource> template);
    /// <summary>
    /// Delete an existing category
    /// </summary>
    /// <remarks>
    /// &lt;b&gt;Permissions Needed:&lt;/b&gt; CATEGORIES_ADMIN
    /// </remarks>
    /// <param name="id">The id of the category to be deleted</param>
    pplx::task<void> deleteCategory(utility::string_t id);
    /// <summary>
    /// Delete a category template
    /// </summary>
    /// <remarks>
    /// If cascade &#x3D; &#39;detach&#39;, it will force delete the template even if it&#39;s attached to other objects. &lt;br&gt;&lt;br&gt;&lt;b&gt;Permissions Needed:&lt;/b&gt; TEMPLATE_ADMIN
    /// </remarks>
    /// <param name="id">The id of the template</param>/// <param name="cascade">The value needed to delete used templates (optional)</param>
    pplx::task<void> deleteCategoryTemplate(utility::string_t id, utility::string_t cascade);
    /// <summary>
    /// List and search categories with optional filters
    /// </summary>
    /// <remarks>
    /// &lt;b&gt;Permissions Needed:&lt;/b&gt; ANY
    /// </remarks>
    /// <param name="filterSearch">Filter for categories whose names begin with provided string (optional)</param>/// <param name="filterActive">Filter for categories that are specifically active or inactive (optional)</param>/// <param name="size">The number of objects returned per page (optional, default to 25)</param>/// <param name="page">The number of the page returned, starting with 1 (optional, default to 1)</param>/// <param name="order">A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional, default to id:ASC)</param>
    pplx::task<std::shared_ptr<PageResource«CategoryResource»>> getCategories(utility::string_t filterSearch, bool filterActive, int32_t size, int32_t page, utility::string_t order);
    /// <summary>
    /// Get a single category
    /// </summary>
    /// <remarks>
    /// &lt;b&gt;Permissions Needed:&lt;/b&gt; ANY
    /// </remarks>
    /// <param name="id">The id of the category to retrieve</param>
    pplx::task<std::shared_ptr<CategoryResource>> getCategory(utility::string_t id);
    /// <summary>
    /// Get a single category template
    /// </summary>
    /// <remarks>
    /// &lt;b&gt;Permissions Needed:&lt;/b&gt; TEMPLATE_ADMIN or CATEGORIES_ADMIN
    /// </remarks>
    /// <param name="id">The id of the template</param>
    pplx::task<std::shared_ptr<TemplateResource>> getCategoryTemplate(utility::string_t id);
    /// <summary>
    /// List and search category templates
    /// </summary>
    /// <remarks>
    /// &lt;b&gt;Permissions Needed:&lt;/b&gt; TEMPLATE_ADMIN or CATEGORIES_ADMIN
    /// </remarks>
    /// <param name="size">The number of objects returned per page (optional, default to 25)</param>/// <param name="page">The number of the page returned, starting with 1 (optional, default to 1)</param>/// <param name="order">A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional, default to id:ASC)</param>
    pplx::task<std::shared_ptr<PageResource«TemplateResource»>> getCategoryTemplates(int32_t size, int32_t page, utility::string_t order);
    /// <summary>
    /// List all trivia tags in the system
    /// </summary>
    /// <remarks>
    /// &lt;b&gt;Permissions Needed:&lt;/b&gt; ANY
    /// </remarks>
    /// <param name="size">The number of objects returned per page (optional, default to 25)</param>/// <param name="page">The number of the page returned, starting with 1 (optional, default to 1)</param>
    pplx::task<std::shared_ptr<PageResource«string»>> getTags(int32_t size, int32_t page);
    /// <summary>
    /// Update an existing category
    /// </summary>
    /// <remarks>
    /// &lt;b&gt;Permissions Needed:&lt;/b&gt; CATEGORIES_ADMIN
    /// </remarks>
    /// <param name="id">The id of the category</param>/// <param name="category">The category to update (optional)</param>
    pplx::task<std::shared_ptr<CategoryResource>> updateCategory(utility::string_t id, std::shared_ptr<CategoryResource> category);
    /// <summary>
    /// Update a category template
    /// </summary>
    /// <remarks>
    /// &lt;b&gt;Permissions Needed:&lt;/b&gt; TEMPLATE_ADMIN
    /// </remarks>
    /// <param name="id">The id of the template</param>/// <param name="template">The updated template information (optional)</param>
    pplx::task<std::shared_ptr<TemplateResource>> updateCategoryTemplate(utility::string_t id, std::shared_ptr<TemplateResource> template);

protected:
    std::shared_ptr<ApiClient> m_ApiClient;
};

}
}
}
}

#endif /* CategoriesApi_H_ */

