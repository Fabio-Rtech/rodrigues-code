/* Efeito de rolagem na navBar/menu */
window.addEventListener("scroll", function () {
    let header= document.querySelector('#header');
    header.classList.toggle('rolagem', window.scrollY > 0);
})